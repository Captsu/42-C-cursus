/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emougeno <emougeno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/05 16:21:33 by emougeno          #+#    #+#             */
/*   Updated: 2026/09/05 17:38:17 by emougeno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	c;
// 	char	d;

// 	c = '9';
// 	d = ',';
// 	printf("c = %d\n, = %d\n", ft_isdigit(c), ft_isdigit(d));
// 	return (0);
// }
