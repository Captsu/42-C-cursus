/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emougeno <emougeno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/10 17:12:13 by emougeno          #+#    #+#             */
/*   Updated: 2026/09/10 18:39:40 by emougeno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	itoalen(int n)
{
	int	count;

	count = 0;
	if (n < 0)
	{
		n = -n;
		count++;
	}
	if (n == 0)
		count++;
	while (n != 0)
	{
		count++;
		n = n / 10;
	}
	printf("%d\n", count);
	return (count);
}

char	*ft_itoa(int n)
{
	char	*dest;
	int		i;
	int		nblen;

	nblen = itoalen(n);
	dest = malloc(sizeof(char) * (nblen + 1));
	if (!dest)
		return (NULL);
	i = nblen - 1;
	if (n < 0)
	{
		n = -n;
		dest[0] = '-';
	}
	while (n != 0)
	{
		dest[i] = (n % 10) + 48;
		n = n / 10;
		i--;
	}
	dest[nblen] = '\0';
	printf("%s\n", dest);
	return (dest);
}

/*int main()
{
	char	*test;

	test = ft_itoa(-565410);
	printf("%s\n", test);
	free(test);
	return (0);
}*/