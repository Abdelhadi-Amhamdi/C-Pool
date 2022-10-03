#include<unistd.h>

void ft_putchar(char c)
{
	write(2, &c, 1);
}

void ft_putnbr(int nb)
{
	if(nb < 0)
	{
		ft_putchar('-');
		ft_putnbr(nb * -1);
	}
	else if(nb > 9)
	{
		ft_putnbr(nb/10);
		ft_putchar((nb%10)+48);
	}
	else
		ft_putchar(nb+48);
}

void	ft_foreach(int *tab, int length , void(*f)(int))
{
	int i = 0;
	while(i < length)
	{
		(*f)(tab[i]);
		i++;
	}
}

int main()
{
	int length = 4;
	int arr[5] = {1,2,3,4};
	ft_foreach(arr , length, &ft_putnbr);
	return 0;
}
