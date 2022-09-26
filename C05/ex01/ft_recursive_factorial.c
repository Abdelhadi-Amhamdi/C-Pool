/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhamdi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 23:23:26 by aamhamdi          #+#    #+#             */
/*   Updated: 2022/09/10 18:15:02 by aamhamdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	i ;
	int	fac ;

	i = 0;
	fac = 1;
	if (nb > 0)
	{
		fac = fac * nb;
		fac = fac * ft_recursive_factorial(nb - 1);
	}
	return (fac);
}

/*int	main()
{
	printf("%d" , ft_recursive_factorial(5));
	return 0;
}*/
