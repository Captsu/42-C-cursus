/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printer_string.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elise <elise@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/14 19:06:56 by elise             #+#    #+#             */
/*   Updated: 2026/09/15 03:18:20 by elise            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Libft/libft.h"
#include "ft_printf.h"

int	printer_string(char *str)
{
	int	count;

	count = ft_strlen(str);
	ft_putstr_fd(str, 1);
	return (count);
}
