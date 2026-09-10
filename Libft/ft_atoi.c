/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emougeno <emougeno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/05 17:41:11 by emougeno          #+#    #+#             */
/*   Updated: 2026/09/10 17:56:24 by emougeno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

int	ft_atoi(const char *str)
{
	int	i;
	int	neg;
	int	nb;

	neg = 1;
	i = 0;
	nb = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			neg *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = nb * 10 + (str[i] - '0');
		i++;
	}
	return (nb * neg);
}

/*#define GREEN "\033[1;32m"
#define RED "\033[1;31m"
#define RESET "\033[0m"

int main(void)
{
	char	*tests[] = {
		"42",
		"-42",
		"+42",
		"   ---42",
		"123abc",
		"-00123",
		"0",
		NULL};
	int		i;

	i = 0;
	while (tests[i])
	{
		printf("%s: ", tests[i]);
		if (ft_atoi(tests[i]) == atoi(tests[i]))
			printf(GREEN "[OK]\n" RESET);
		else
		{
			printf(RED "[KO]\n" RESET);
			printf("ft: %d  original: %d\n", ft_atoi(tests[i]), atoi(tests[i]));
		}
		i++;
	}
	return (0);
}*/