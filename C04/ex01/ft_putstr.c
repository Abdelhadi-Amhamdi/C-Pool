/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhamdi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 22:19:36 by aamhamdi          #+#    #+#             */
/*   Updated: 2022/09/06 12:32:41 by aamhamdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h> 

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

/*int	main()
{
	char string[] = "hi there";
	ft_putstr(string);
	return 0;
}*/
