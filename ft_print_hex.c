/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsilva-m <jsilva-m@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 11:54:43 by jsilva-m          #+#    #+#             */
/*   Updated: 2024/01/08 17:16:12 by jsilva-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// and returns 1 if successful
// Write the character 'c' to the console
// Return the number of characters printed
// 
#include "ft_printf.h"

int	ft_print_hex(unsigned long p, char *hex)
{
	int	len;
	int	result;

	len = 0;
	if (p > 15)
	{
		result = ft_print_hex(p / 16, hex);
		if (result == -1)
			return (-1);
		len += result;
		result = ft_printchar(hex[p % 16]);
		if (result == -1)
			return (-1);
		len += result;
	}
	else
	{
		result = ft_printchar(hex[p]);
		if (result == -1)
			return (-1);
		len += result;
	}
	return (len);
}
