/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printchar.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsilva-m <jsilva-m@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 19:56:09 by jsilva-m          #+#    #+#             */
/*   Updated: 2024/01/08 16:46:03 by jsilva-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// añadimos excepcion de %c y de tabulacion
#include "ft_printf.h"

int	ft_printchar(int c)
{
	if (write(1, &c, 1) == -1)
		return (-1);
	return (1);
}
