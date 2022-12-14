/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhamdi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 18:26:53 by aamhamdi          #+#    #+#             */
/*   Updated: 2022/09/07 18:33:56 by aamhamdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int ft_is_prime(int nb)
{
	if(nb%1 == 0 && nb%nb == 0 && nb > 1)
	{
		return (1);
	}
	return (0);
}

int main()
{
	printf("%d" , ft_is_prime(6));
	return 0;
}
