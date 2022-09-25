/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhamdi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 20:08:47 by aamhamdi          #+#    #+#             */
/*   Updated: 2022/08/29 14:17:57 by aamhamdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	backup ;

	while (size > 0)
	{
		i = 0;
		while (i < size - 1)
		{
			if (tab[i] > tab[i + 1])
			{
				backup = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = backup;
			}
			i++;
		}
		size--;
	}
}

/*int	main()
{

	int tab[] = {2,6,4,3,9 , 0 , 100 , 53 , 42};
	int size = 9;
	int i =0 ;
	ft_sort_int_tab(tab , size);
	while (i < size){
		printf("%d", tab[i]);
		i++;
	}

	return 0;
}*/
