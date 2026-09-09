/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emougeno <emougeno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/05 16:21:33 by emougeno          #+#    #+#             */
/*   Updated: 2026/09/09 15:26:06 by emougeno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

/*#define GREEN "\033[1;32m"
#define RED "\033[1;31m"
#define RESET "\033[0m"

int main(void)
{
	char	tests[] = {'a', '0', '9', 128, -1};
	int i;

	i = 0;
	while (tests[i])
	{
		printf("ft = %d et ori = %d ", ft_isdigit(tests[i]), isdigit(tests[i]));
		if ((ft_isdigit(tests[i]) == 0 && isdigit(tests[i]) == 0)
			|| (ft_isdigit(tests[i]) > 0 && isdigit(tests[i]) > 0))
			printf(GREEN "[OK]\n" RESET);
		else
			printf(RED "[KO]\n" RESET);
		i++;
	}
	return (0);
}*/
