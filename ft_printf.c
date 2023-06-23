/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evportel <evportel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 11:47:08 by evportel          #+#    #+#             */
/*   Updated: 2023/06/23 10:25:10 by evportel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	add_one_more(int flag)
/** This function is dedicated to incrementing a static counter 
 * that runs through the entire execution of the function, 
 * adding 1 to each impression on the display. 
 * The flag serves to reset the static variable, 
 * informing 0, in cases where the ft_printf function is called several times.
 * Flag 1, just keep adding one more to each character printed.
*/
{
	static int	sum;

	if (flag == 1)
		sum++;
	else if (flag == 0)
		sum = 0;
	return (sum);
}

static void	show_of_parameter(char charactere, va_list arg)
/** Function works by identifying the formatting specifier character
 * and directing to the correct printing
 * of the parameter passed by the va_list variable
*/
{
	if (charactere == 'c')
		ft_putchar(va_arg(arg, int));
	else if (charactere == 's')
		ft_putstr(va_arg(arg, char *));
	else if (charactere == 'p')
		ft_putptr(va_arg(arg, unsigned long), 0);
	else if (charactere == 'd' || charactere == 'i')
		ft_putnbr(va_arg(arg, int));
	else if (charactere == 'u')
		ft_putnbr_unsigned(va_arg(arg, unsigned int));
	else if (charactere == 'x')
		ft_put_hex_lower(va_arg(arg, unsigned int));
	else if (charactere == 'X')
		ft_put_hex_upper(va_arg(arg, unsigned int));
	else if (charactere == '%')
		ft_putchar('%');
}

int	ft_printf(const char *format, ...)
/** This is the main function of the file. 
 * The loop looks for the special character '%', 
 * while it doesn't find it, it prints normally. 
 * When it finds it, it sends the specifier character reference 
 * to the function that handles the formatting.*/
{
	int		count;
	va_list	ptr_args;

	va_start(ptr_args, format);
	count = add_one_more(0);
	while (*format)
	{
		if (*format != '%')
		{
			write(1, &format[0], sizeof(char));
			add_one_more(1);
			format++;
		}
		else
		{
			show_of_parameter(format[1], ptr_args);
			format = format + 2;
		}
	}
	count = add_one_more(1) - 1;
	va_end(ptr_args);
	return (count);
}
