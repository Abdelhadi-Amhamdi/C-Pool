#include<stdio.h>
#include<stdlib.h>

int look_for_sep(char *sep, char c)
{
    while(*sep)
    {
        if(*sep == c)
            return 1;
        sep++;
    }
    return 0;
}

int ft_strlen(char *str)
{
    int i = 0;
    while(str[i])
        i++;
    return i;
}

char *get_word(char *str, int start , int end)
{
    char *tab;
    int j = 0;
    while(start < end)
    {
        tab[j] = str[start];
        start++;
        j++;
    }
    tab[j] = '\0';
    return tab;
}

int count_strings(char *str , char *sep)
{
    int i = 0;
    int count = 1;
    while (str[i] != '\0')
    {
        if((str[i] >= 'a' && str[i] <= 'z') && (look_for_sep(sep , str[i+1]) == 1 || str[i+1] == '\0'))
            count++;
        i++;
    }
    return (count);
}

char **ft_split(char *str, char *charset)
{
    char *p;
    int i = 0;
    int n = 0;
    int j = 0;
    char **tabs;
    char *tmp;
    int current_index = i;

    tabs = (char **)malloc(sizeof(char *) * count_strings(str , charset) + 1);
    while (str[i])
    {
        if(look_for_sep(charset, str[i]) == 1 || str[i+1] == '\0')
        {
            tmp = get_word(str, current_index, i);
            current_index = i+1;
            p = (char *)malloc(sizeof(char) * ft_strlen(tmp) + 1);
            if(p)
            {
                n--;
                while(tmp[n++])
                    p[n] = tmp[n];
                p[n] = '\0';
                n = 0;
                tabs[j] = p;
                j++;
            }
        }
        i++;
    }
    tabs[j] = 0;
    return tabs;   
}

int main()
{
    char str[] = "hello world! hey there";
    char charset[] = " ";
    char **tabs;
    int i = 0;
    tabs = ft_split(str , charset);
    while (tabs[i])
        printf("%s\n" , tabs[i++]);
    return 0;
}