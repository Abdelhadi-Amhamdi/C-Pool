/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhamdi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 22:13:38 by aamhamdi          #+#    #+#             */
/*   Updated: 2022/09/06 12:29:44 by aamhamdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i ;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
/*int	main()
{
	char string[] = "hello";
	printf("%d" , ft_strlen(string));
	return 0;
}*/
