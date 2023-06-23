/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils_2.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evportel <evportel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 17:42:16 by evportel          #+#    #+#             */
/*   Updated: 2023/06/23 10:52:25 by evportel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_put_hex_lower(unsigned int nbr)
/** Prints the conversion of an integer (unsigned) parameter 
 * to an unsigned hexadecimal, formatting as lower case. */
{
	if (nbr > 15)
		ft_put_hex_lower(nbr / 16);
	write(1, &"0123456789abcdef"[nbr % 16], sizeof(char));
	add_one_more(1);
}

void	ft_put_hex_upper(unsigned int nbr)
/** Prints the conversion of an integer (unsigned) parameter
 * to an unsigned hexadecimal, formatting as uppercase. */
{
	if (nbr > 15)
		ft_put_hex_upper(nbr / 16);
	write(1, &"0123456789ABCDEF"[nbr % 16], sizeof(char));
	add_one_more(1);
}
