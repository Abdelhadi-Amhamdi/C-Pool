/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhamdi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 22:49:28 by aamhamdi          #+#    #+#             */
/*   Updated: 2022/09/03 23:18:43 by aamhamdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	fac ;
	int	i ;

	fac = 1;
	i = 0;
	while (nb > i)
	{
		fac = fac * (nb - i);
		i++;
	}
	return (fac);
}

/*int main()
{
	printf("%d" , ft_iterative_factorial(4));
	return 0;
}*/
