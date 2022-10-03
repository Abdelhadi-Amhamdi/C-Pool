#include<stdio.h>
#include<stdlib.h>

int filter(char *tab)
{
    
    while(*tab)
    {
        if(*tab > 92)
        {
            return 1;
        }
        tab++;
    }
    return 0;
}

int ft_any(char **tab, int(*f)(char*))
{
    int i = 0;
    while(tab[i])
    {
        if((*f)(tab[i]) == 1)
        {
            return 1;
        }
        i++;
    }
    
    return 0;
}

int main()
{
    char **strs;
    strs = malloc(sizeof(char *) * 4);
    strs[0] = malloc(sizeof(char) * 5);
    strs[1] = malloc(sizeof(char) * 5);
    strs[2] = malloc(sizeof(char) * 5);
    strs[0] = "hELLo";
    strs[1] = "HELLO";
    strs[2] = "THeRE";
    strs[3] = 0;

    printf("%d" , ft_any(strs , &filter));

    return 0;
}