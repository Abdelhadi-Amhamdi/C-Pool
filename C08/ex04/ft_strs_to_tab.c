/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhamdi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 21:55:56 by aamhamdi          #+#    #+#             */
/*   Updated: 2022/09/15 22:00:41 by aamhamdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_str_len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	int		n;
	char	*p;

	i = 0;
	n = 0;
	while (src[i])
		i++;
	p = (char *)malloc(i * sizeof (char));
	if (!p)
		return (0);
	while (n < i)
	{
		p[n] = src[n];
		n++;
	}
	p[n] = '\0';
	return (p);
}

struct  s_stock_str  *ft_strs_to_tab(int ac, char **av)
{
    int i;
    struct  s_stock_str *tab;


    tab = malloc(sizeof(t_stock_str) * ac + 1);
    if (!tab)
        return (0);
    i = 0;
    while (i < ac)
    {
        tab[i].size = ft_str_len(av[i]);
        tab[i].str = av[i];
        tab[i].copy = ft_strdup(av[i]);
        i++;
    }
    tab[i].copy = 0;
    tab[i].str = 0;
    return (tab);
    free(tab);
}
