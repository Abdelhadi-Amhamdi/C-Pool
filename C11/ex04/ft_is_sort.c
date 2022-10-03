#include<stdio.h>
#include<stdlib.h>

int check_if_sort(int x , int y)
{
    if(x < y)
        return -1;
    else if (x > y)
        return 1;
    return 0;
}

int ft_is_sort(int *tab,int length,int (*f)(int,int))
{
    int i = 0;
    int result = 1;
    while (i < length)
    {
        int j = i + 1;
        while(j < length)
        {
            if((*f)(tab[i], tab[j]) >= 0)
                return 0;
            j++;
        }
        i++;
    }
    return result;
}


int main()
{
    int tab[] = {1,2,3,4,5,6,7,8,9};
    printf("%d" , ft_is_sort(tab , 10 , &check_if_sort));
    return 0;
}