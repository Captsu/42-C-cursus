/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elise <elise@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/10 17:12:13 by emougeno          #+#    #+#             */
/*   Updated: 2026/09/12 01:48:31 by elise            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	itoalen(long n)
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
	return (count);
}

char	*ft_itoa(int n)
{
	char	*dest;
	long	i;
	int		nblen;

	i = n;
	nblen = itoalen(n);
	dest = malloc(sizeof(char) * (nblen + 1));
	if (!dest)
		return (NULL);
	dest[nblen] = '\0';
	if (i < 0)
	{
		i = -i;
		dest[0] = '-';
	}
	while (i >= 10)
	{
		nblen--;
		dest[nblen] = (i % 10) + '0';
		i = i / 10;
	}
	dest[--nblen] = i + '0';
	return (dest);
}

/*int	main(void)
{
	int		tests[] = { 0, 42, -42, 2147483647,	-2147483648};
	char	*str;
	int		i;

	i = 0;
	while (i < 5)
	{
		str = ft_itoa(tests[i]);
		printf("%s\n", str);
		free(str);
		i++;
	}
	return (0);
}*/