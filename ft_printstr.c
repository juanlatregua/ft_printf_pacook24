/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsilva-m <jsilva-m@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 19:22:07 by jsilva-m          #+#    #+#             */
/*   Updated: 2024/01/08 17:41:54 by jsilva-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printstr(char	*str)
{
	int	len;
	int	result;

	len = 0;
	if (!str)
		str = "(null)";
	else if (str[0] == '\0')
		return (0);
	while (str[len] != '\0')
	{
		result = ft_printchar(str[len]);
		if (result == -1)
			return (-1);
		len++;
	}
	return (len);
}
