/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elise <elise@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/14 02:24:35 by elise             #+#    #+#             */
/*   Updated: 2026/09/15 03:42:20 by elise            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdint.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <ctype.h>
# include <stdarg.h>

int	ft_printf(const char *format, ...);
int	check_error(const char *format);
int	printer_decider(char c, va_list	args);
int	printer_adresse(char *str);
int	printer_char(int c);
int	printer_dig(int nb);
int	printer_hexa(int nb, char x);
int	printer_pourcentage(char c);
int	printer_string(char *str);
int	printer_unsigned_int(unsigned int nb);
int	numlen(long n);

#endif