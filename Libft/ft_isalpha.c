/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emougeno <emougeno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/05 16:14:41 by emougeno          #+#    #+#             */
/*   Updated: 2026/09/05 17:38:18 by emougeno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z')
		|| (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	c;
// 	char	d;

// 	c = 'c';
// 	d = ',';
// 	printf("c = %d\n, = %d\n", ft_isalpha(c), ft_isalpha(d));
// 	return (0);
// }