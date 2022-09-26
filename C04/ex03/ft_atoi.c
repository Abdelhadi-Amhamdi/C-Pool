/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_atoi.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhamdi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 09:00:18 by aamhamdi          #+#    #+#             */
/*   Updated: 2022/09/07 09:56:44 by aamhamdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int ft_atoi(char *str)
{
	int i = 0;
	int j = 0;
	int sign = 1;
	int result = 0;

	while(str[i] != '\0')
	{
		if((str[i] >= 9 && str[i] <= 13) || (str[i] == 32 && j == 0))
			i++;
		else if (str[i] == '-' || str[i] == '+')
		{
			sign = str[i] == '-' ? sign * -1 : sign ;
			j = 1;
			i++;
		}
		else
			break;
	}
	while(str[i])
	{
		if(str[i] >= '0' && str[i] <= '9')
		{
			result = (result *  10) + (str[i] - '0');
			i++;
		}
		else
			break;
	}
	return (result * sign);
}

int main()
{
	printf("%d" , ft_atoi("\t\v   --+--+--+-+1234"));
	return (0);
}
