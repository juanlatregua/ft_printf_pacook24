/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsilva-m <jsilva-m@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 19:30:33 by jsilva-m          #+#    #+#             */
/*   Updated: 2024/01/08 17:25:27 by jsilva-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_negative(long n)
{
	int	len;
	int	result;

	len = 0;
	result = ft_printchar('-');
	if (result == -1)
		return (-1);
	len += result;
	result = ft_printnbr(-n);
	if (result == -1)
		return (-1);
	len += result;
	return (len);
}

int	ft_print_positive(long n)
{
	int	len;
	int	result;

	len = 0;
	if (n > 9)
	{
		result = ft_printnbr(n / 10);
		if (result == -1)
			return (-1);
		len += result;
		result = ft_printnbr(n % 10);
		if (result == -1)
			return (-1);
		len += result;
	}
	else
	{
		result = ft_printchar(n + 48);
		if (result == -1)
			return (-1);
		len += result;
	}
	return (len);
}

int	ft_printnbr(long n)
{
	if (n == -2147483648)
		return (ft_printstr("-2147483648"));
	else if (n < 0)
		return (ft_print_negative(n));
	else
		return (ft_print_positive(n));
}
