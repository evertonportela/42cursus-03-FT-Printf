/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evportel <evportel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 11:47:08 by evportel          #+#    #+#             */
/*   Updated: 2023/06/21 15:28:32 by evportel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	add_one_more(int flag)
/**
 * Essa função é dedicada a incrementar um contador estático que passeia 
 * por toda execução da função, somando 1, a cada impressão no display.
 * A flag serve para resetar a variável estática, informando 0, 
 * nos casos em que a função ft_printf é chamada várias vezes. 
 * Flag 1, apenas continua somando mais um a cada caractere impresso.
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
/**
 * Função trabalha identificando o caractere especificador de formatação 
 * e direcionando para a impressão correta do parâmetro passado 
 * pela variável va_list
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
