/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evportel <evportel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 11:47:08 by evportel          #+#    #+#             */
/*   Updated: 2023/06/17 20:35:15 by evportel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	show_of_parameter(char charactere, va_list arg)
{
	if (charactere == 'c')
	{
		ft_putchar(va_arg(arg, int));
	}		
}

int	ft_printf(const char *format, ...)
{
	int		count;
	va_list	ptr_args;

	va_start(ptr_args, format);
	count = 0;
	while (*format)
	{
		if (*format != '%')
		{
			write(1, &format[0], sizeof(char));
			count++;
			format++;
		}
		else
		{
			show_of_parameter(format[1], ptr_args);
			count++;
			format = format + 2;
		}
	}
	va_end(ptr_args);
	return (count);
}

// Sua função deve lidar com as seguintes conversões: c s p d i u x X %