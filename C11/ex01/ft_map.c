#include<stdio.h>
#include<stdlib.h>

int ft_filter(int i)
{
    if(i > 10 )
    {
        return (i/10);
    }
    return i;
}

int *ft_map(int *arr, int length, int(*f)(int))
{
    int *My_array;
    int n = 0;
    int i = 0;
    My_array = malloc(sizeof(int) * length);
    while (i < length)
    {
        int x = f(arr[i]);
        if(x != 0)
        {
            My_array[n] = x;
            n++;
        }
        i++;
    }
    My_array[i] = 0;
    return My_array;
}

int main()
{
    int arr[9] = {1,20,5,66,3,77,9,2,150};
    int *res = ft_map(arr , 9, &ft_filter);
    while(*res)
    {
        printf("%d" , *res);
        res++;
    }
    return 0;
}