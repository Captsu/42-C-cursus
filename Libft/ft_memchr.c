/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emougeno <emougeno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/07 16:58:33 by emougeno          #+#    #+#             */
/*   Updated: 2026/09/09 15:41:55 by emougeno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *memblock, int c, size_t size)
{
	size_t	i;

	i = 0;
	while (i < size)
	{
		if (*((unsigned char *)memblock + i) == (unsigned char)c)
			return ((unsigned char *)memblock + i);
		i++;
	}
	return (NULL);
}

/*#define GREEN "\033[1;32m"
#define RED "\033[1;31m"
#define RESET "\033[0m"

int main(void)
{
	char	src[] = "Test de memchr";
	char	c;
	char	*destft;
	char	*destori;
	int size;
	int len;

	c = 'd';
	len = ft_strlen(src);
	size = len;
	destft = ft_memchr(src, c, size);
	destori = memchr(src, c, size);
	if (memcmp(destft, destori, sizeof(destft)) == 0)
		printf(GREEN "[OK]\n" RESET);
	else
		printf(RED "[KO]\n" RESET);
	return (0);
}*/