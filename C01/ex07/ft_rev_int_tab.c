/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhamdi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 15:35:33 by aamhamdi          #+#    #+#             */
/*   Updated: 2022/08/29 14:11:24 by aamhamdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i ;
	int	backup ;

	i = 0 ;
	while (i < size / 2)
	{
		backup = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = backup;
		i++;
	}
}

/*int main()
{
	int arr[] = {5,2,7,9};
	int size = 4;
   	int i = 0 ;
	ft_rev_int_tab(arr , size);
	while(i < size)
	{
		printf("%d" , arr[i]);
	i++;
	}
	return 0;
}*/
