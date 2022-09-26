/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhamdi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 12:02:04 by aamhamdi          #+#    #+#             */
/*   Updated: 2022/09/10 21:32:14 by aamhamdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

int	str_len(char *str)
{
	int	i ;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	swap(char **s1, char **s2)
{
	char	*tmp;

	tmp = *s1;
	*s1 = *s2;
	*s2 = tmp;
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] > s2[i])
			return (1);
		else if (s1[i] < s2[i])
			return (-1);
		i++;
	}
	return (0);
}

void	ft_putchar(int argc, char **argv)
{
	int	n;
	int	l;

	n = 1;
	while (argc > n)
	{
		l = 0;
		while (argv[n][l])
		{
			write(1, &argv[n][l], 1);
			l++;
		}
		write(1, "\n", 1);
		n++;
	}
}

int	main(int argc, char **argv)
{
	int	j ;
	int	i ;

	i = 1;
	if (argc >= 2)
	{
		while (argv[i])
		{
			j = i + 1;
			while (argv[j])
			{
				if (ft_strcmp(argv[i], argv[j]) > 0)
					swap(&argv[i], &argv[j]);
				j++;
			}
			i++;
		}
	}
	ft_putchar(argc, argv);
	return (0);
}
