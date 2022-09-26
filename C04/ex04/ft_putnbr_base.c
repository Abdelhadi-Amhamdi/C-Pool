/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_base.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhamdi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 10:20:25 by aamhamdi          #+#    #+#             */
/*   Updated: 2022/09/07 11:55:28 by aamhamdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>


void ft_putchar(char n)
{
	write(1, &n, 1);
}

int str_len(char *str)
{
	int n = 0;
	while(str[n])
		n++;
	return (n);
}

void ft_putnbr_base(int nbr, char *base)
{

	int i = 0;
	int j = 0;
	int n = 0;
	int c = 0;

	n = str_len(base);

	while (base[i] )
	{
		j = i + 1;
		while(base[j])
		{
			if(base[i] == base[j])
			{
				c = 1;
				break ;
			}	
			j++;
		}
		if (base[i] == '+' || base[i] == '-' || n <= 1 || c == 1)
		{
			c = 1;
			break ;
		}
		i++;
	}
	if(c == 0 )
	{
	  if(nbr >= n)
	  {
		 ft_putnbr_base((nbr / n) , base);
		 ft_putchar(base[nbr%n]);
	  }
	  else if (nbr < 0)
	  {
		  ft_putchar('-');
		  ft_putnbr_base((nbr * -1) , base);
	  }
	  else
		 ft_putchar(base[nbr%n]);
	}

}

int main()
{

	int nbr = 99 ;
	char base[] = "ba";
	ft_putnbr_base(nbr , base);
	return (0);

}
