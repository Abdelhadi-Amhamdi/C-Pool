
#include "ft_stock_str.h"
#include<unistd.h>

void ft_putstr(char *str)
{
    int i = 0;
    while(str[i])
        write(1, &str[i++], 1);
    write(1, "\n", 1);
}

void ft_putchar(char c)
{
    write(1, &c, 1);
}
void	ft_putnbr(int nb)
{
	else if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putchar((nb % 10) + '0');
	}
	else
	{
		ft_putchar(nb + '0');
	}
    write(1, "\n", 1);
}

void ft_show_tab(struct s_stock_str *par)
{
    int i = 0;
    while(par[i].str != 0)
    {
        ft_putstr(par[i].str);
        ft_putnbr(par[i].size);
        ft_putstr(par[i].copy);
        i++;
    }
}