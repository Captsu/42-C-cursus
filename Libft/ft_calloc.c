/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elise <elise@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/08 22:49:58 by emougeno          #+#    #+#             */
/*   Updated: 2026/09/13 20:36:42 by elise            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t elemcount, size_t size)
{
	unsigned char	*dest;

	if (elemcount > SIZE_MAX / size)
		return (NULL);
	dest = malloc(size * elemcount);
	if (!dest)
		return (NULL);
	ft_bzero(dest, size * elemcount);
	return (dest);
}

/*#define GREEN "\033[1;32m"
#define RED "\033[1;31m"
#define RESET "\033[0m"

int main(void)
{
	char *callocori;
	char	*callocft;
	int	i;
	int elem;
	int size;

	elem = 50;
	size = sizeof(char);
	callocori = calloc(elem, size);
	callocft = ft_calloc(elem, size);
	i = 0;
	while (i < elem)
		printf("%d ", callocft[i++]);
	printf("\n");
	i = 0;
	while (i < elem)
		printf("%d ", callocori[i++]);
	printf("\n");
		if (ft_memcmp(callocft, callocori, sizeof(callocft)) == 0)
		printf(GREEN "[OK]\n" RESET);
	else
		printf(RED "[KO]\n" RESET);
	free(callocori);
	free(callocft);
	return (0);
}*/