/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsig_nbr.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsilva-m <jsilva-m@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 15:44:50 by jsilva-m          #+#    #+#             */
/*   Updated: 2024/01/08 16:51:42 by jsilva-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_unsig_nbr(unsigned int n)
{
	int	len;
	int	result;

	len = 0;
	if (n > 9)
	{
		result = ft_print_unsig_nbr(n / 10);
		if (result == -1)
			return (-1);
		len += result;
	}
	result = ft_printchar(n % 10 + 48);
	if (result == -1)
		return (-1);
	len += result;
	return (len);
}
