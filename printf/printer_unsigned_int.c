/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printer_unsigned_int.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elise <elise@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/14 19:12:39 by elise             #+#    #+#             */
/*   Updated: 2026/09/15 01:39:50 by elise            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Libft/libft.h"
#include "ft_printf.h"

int	numlen(long n);

int printer_unsigned_int(unsigned int nb)
{
	int				len;
	unsigned int	n;
	
	n = (unsigned int)nb;
	len = numlen(n);
	ft_putnbr_fd(n, 1);
	return(len);
}