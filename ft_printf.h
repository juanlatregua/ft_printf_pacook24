/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsilva-m <jsilva-m@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 11:51:23 by jsilva-m          #+#    #+#             */
/*   Updated: 2024/01/08 16:24:59 by jsilva-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H 
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	ft_printf(const char *format, ...);
int	ft_printchar(int c);
int	ft_printstr(char *str);
int	ft_printnbr(long nb);
int	ft_hexlen(unsigned long n);
int	ft_print_hex(unsigned long p, char	*hex);
int	ft_printnbr_hex(unsigned int n);
int	ft_print_unsig_nbr(unsigned int n);

#endif
