/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhamdi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 09:27:48 by aamhamdi          #+#    #+#             */
/*   Updated: 2022/09/04 09:37:47 by aamhamdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	i ;
	int	pow ;

	i = 0;
	pow = 1;
	if (power > i)
	{
		pow = pow * nb;
		i = i + 1;
		pow = pow * ft_recursive_power(nb, power - i);
	}
	return (pow);
}

/*int main()
{
	printf("%d" , ft_recursive_power(55 , 4));
	return 0;
}*/
