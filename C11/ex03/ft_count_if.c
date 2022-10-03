#include<stdio.h>
#include<stdlib.h>

int filter(char *tab)
{
    while(*tab)
    {
        if(*tab > 92)
            return 1;
        tab++;
    }
    return 0;
}

int ft_count_if(char **tab, int length, int (*f)(char *))
{
    int size = 0;
    int i = 0;
    while(i < length)
    {
        if((*f)(tab[i]) == 0)
            size++;
        i++;
    }
    return size;
}


int main()
{
    char **strs;
    strs = malloc(sizeof(char *) * 4);
    strs[0] = malloc(sizeof(char) * 5);
    strs[1] = malloc(sizeof(char) * 5);
    strs[2] = malloc(sizeof(char) * 5);
    strs[0] = "HELLO";
    strs[1] = "HELLO";
    strs[2] = "THERE";

    printf("%d" , ft_count_if(strs , 3 , &filter));
    return 0;
}