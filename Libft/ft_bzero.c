/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emougeno <emougeno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/06 17:59:53 by emougeno          #+#    #+#             */
/*   Updated: 2026/09/10 17:56:24 by emougeno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		*(unsigned char *)(s + i) = 0;
		i++;
	}
}

/*#define GREEN "\033[1;32m"
#define RED "\033[1;31m"
#define RESET "\033[0m"

int main(void)
{
	char	testft[10];
	char	testori[10];

	ft_bzero(testft, sizeof(testft));
	bzero(testori, sizeof(testori));
	if (ft_memcmp(testft, testori, sizeof(testft)) == 0)
		printf(GREEN "[OK]\n" RESET);
	else
		printf(RED "[KO]\n" RESET);
	return (0);
}*/