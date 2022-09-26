/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhamdi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 21:32:03 by aamhamdi          #+#    #+#             */
/*   Updated: 2022/09/15 21:39:05 by aamhamdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H

# include<unistd.h>

typedef enum s_bool{
	FALSE,
	TRUE
}	t_bool;

# define    EVEN(nbr) (nbr % 2==0)
# define    EVEN_MSG   "I have an even number of arguments.\n"
# define    ODD_MSG    "I have an odd number of arguments.\n"
# define    SUCCESS    0
#endif
