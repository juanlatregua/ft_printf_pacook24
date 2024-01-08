/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsilva-m <jsilva-m@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 11:49:26 by jsilva-m          #+#    #+#             */
/*   Updated: 2024/01/08 17:58:22 by jsilva-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_formats(char specifier, va_list	ap)
{
	int		count;

	count = 0;
	if (specifier == 'c')
		count += ft_printchar(va_arg(ap, int));
	else if (specifier == 's')
		count += ft_printstr(va_arg(ap, char *));
	else if (specifier == 'p')
	{
		count += ft_printstr("0x");
		count += ft_print_hex(va_arg(ap, unsigned long), "0123456789abcdef");
	}
	else if (specifier == 'd' || specifier == 'i')
		count += ft_printnbr((long)va_arg(ap, int));
	else if (specifier == 'u')
		count += ft_print_unsig_nbr(va_arg(ap, unsigned int));
	else if (specifier == 'x')
		count += ft_print_hex(va_arg(ap, unsigned int), "0123456789abcdef");
	else if (specifier == 'X')
		count += ft_print_hex(va_arg(ap, unsigned int), "0123456789ABCDEF");
	else if (specifier == '%')
		count += ft_printchar('%');
	return (count);
}

int	ft_printchar_error_check(char c)
{
	int	result;

	result = ft_printchar(c);
	if (result == -1)
		return (-1);
	return (result);
}

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		count;
	int		result;

	count = 0;
	va_start(ap, format);
	while (*format != '\0')
	{
		if (*format == '%')
		{
			result = ft_formats(*(++format), ap);
		}
		else
		{
			result = ft_printchar_error_check(*format);
		}
		if (result == -1)
			return (-1);
		count += result;
		++format;
	}
	va_end(ap);
	return (count);
}
