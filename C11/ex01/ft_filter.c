#include<stdio.h>
int new_tab[10];
int is_lower_than_ten(int nb)
{
    if(nb > 10)
        return nb;
    else
        return 0;
}
int *ft_filetr(int *tab, int(*f)(int))
{
   
    int i = 0;
    int x = 0;
    
    while(tab[x])
    {
        if((*f)(tab[x]))
        {
            new_tab[i] = tab[x];
            i++;
        }
        x++;
    }
    printf("%d\n" , new_tab[0]);
    new_tab[i] = 0;
    return (new_tab);
}

int main()
{

    int tab[10] = {1,2,77,8,44,2};
    int *n ;
    n = ft_filetr(tab , &is_lower_than_ten);
    while(*n) 
    {
        printf("%d" , *n);
        n++;
    }
    return 0;
}