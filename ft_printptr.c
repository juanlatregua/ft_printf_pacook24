/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printptr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsilva-m <jsilva-m@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 18:29:57 by jsilva-m          #+#    #+#             */
/*   Updated: 2024/01/08 19:21:53 by jsilva-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printptr(void	*ptr)
{
	int	count;
	int	result;

	count = 0;
	if (ptr == NULL)
	{
		result = ft_printstr("0x0");
		if (result == -1)
			return (-1);
		count += result;
	}
	else
	{
		result = ft_printstr("0x");
		if (result == -1)
			return (-1);
		count += result;
		result = ft_print_hex((unsigned long)ptr, "0123456789abcdef");
		if (result == -1)
			return (-1);
		count += result;
	}
	return (count);
}
