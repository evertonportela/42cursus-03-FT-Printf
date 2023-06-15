/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evportel <evportel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 11:47:08 by evportel          #+#    #+#             */
/*   Updated: 2023/06/15 17:38:04 by evportel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// int printf(const char *restrict format, ...);
int ft_printf(const char *format, ...)
{
	int	length;
	va_list	ptr_args;

	va_start(ptr_args, format);
	if (format[0] == 'c'){
		va_arg(ptr_args, char *);
		write(1, format, sizeof(char));
	}
	
	length = 1;
	va_end(ptr_args);
	return (length);
}
