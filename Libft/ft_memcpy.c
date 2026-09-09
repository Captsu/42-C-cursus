/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emougeno <emougeno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/08 14:52:33 by emougeno          #+#    #+#             */
/*   Updated: 2026/09/08 15:36:48 by emougeno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t size)
{
	size_t			i;
	unsigned char	*s2;
	unsigned char	*s1;

	if (!dest && !src)
		return (NULL);
	s2 = (unsigned char *) dest;
	s1 = (unsigned char *) src;
	i = 0;
	while (i < size)
	{
		s2[i] = s1[i];
		i++;
	}
	return (dest);
}

// #define GREEN "\033[1;32m"
// #define RED "\033[1;31m"
// #define RESET "\033[0m"

// int main(void)
// {
// 	char	src[] = "Hello test 1234";
// 	char	destft[20];
// 	char	destori[20];
// 	int size;

// 	size = 15;
// 	ft_memcpy(destft, src, size);
// 	memcpy(destori, src, size);
// 	if (memcmp(destft, destori, sizeof(destft)) == 0)
// 		printf(GREEN "[OK]\n" RESET);
// 	else
// 		printf(RED "[KO]\n" RESET);
// 	return (0);
// }