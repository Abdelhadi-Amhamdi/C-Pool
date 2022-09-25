/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhamdi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 12:27:21 by aamhamdi          #+#    #+#             */
/*   Updated: 2022/08/29 11:26:42 by aamhamdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = (a / b);
	*mod = (a % b);
}

/*int	main()
{

int a = 13;
int b = 6;

int div;
int mod;

ft_div_mod(a,b,&div,&mod);
return 0;
}*/
