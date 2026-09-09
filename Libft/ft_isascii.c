/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emougeno <emougeno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/05 17:34:25 by emougeno          #+#    #+#             */
/*   Updated: 2026/09/09 15:26:09 by emougeno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

/*#define GREEN "\033[1;32m"
#define RED "\033[1;31m"
#define RESET "\033[0m"

int main(void)
{
	char	tests[] = {'a', '0', '.', 128, -1};
	int i;

	i = 0;
	while (tests[i])
	{
		printf("ft = %d et ori = %d ", ft_isascii(tests[i]), isascii(tests[i]));
		if ((ft_isascii(tests[i]) == 0 && isascii(tests[i]) == 0)
			|| (ft_isascii(tests[i]) > 0 && isascii(tests[i]) > 0))
			printf(GREEN "[OK]\n" RESET);
		else
			printf(RED "[KO]\n" RESET);
		i++;
	}
	return (0);
}*/