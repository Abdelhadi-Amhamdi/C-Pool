#include<stdio.h>
#include<stdlib.h>

int ft_strlen(char *str)
{
    int s = 0;
    while(str[s])
        s++;
    return s;
}

int str_ultimate_len(char **strs , char *sep)
{
    int size = 0;
    int i = 2;
    while(strs[i])
    {
        size += ft_strlen(strs[i]);
        size += ft_strlen(sep);
        i++;
    }
    return size - ft_strlen(sep);
}

char *ft_strjoin(char **strs , char *sep)
{
    int i = 2;
    int s = str_ultimate_len(strs , sep);
    char *p;
    int j ;
    int n = 0;
    p = (char *)malloc(sizeof(char) * s);
    if(!p)
        return 0;
        
    while(strs[i])
    {
        j = 0;
        while (strs[i][j])
            p[n++] = strs[i][j++];
        j = 0;
        while (sep[j] && strs[i+1] != 0)
            p[n++] = sep[j++];
        i++;
    }
    p[n] = '\0';
    return p;
}


int main(int argc , char **argv)
{
    (void)argc;
    printf("%s" , ft_strjoin(argv , argv[1]));
    return 0;
}