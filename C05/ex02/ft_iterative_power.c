/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhamdi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 23:45:45 by aamhamdi          #+#    #+#             */
/*   Updated: 2022/09/10 18:16:06 by aamhamdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i ;
	int	pow;

	i = 0;
	pow = 1;
	while (power > i)
	{
		pow = pow * nb;
		i++;
	}
	return (pow);
}

/*int main()
{
	printf("%d" , ft_iterative_power(5 , 4));
	return 0;
}*/
