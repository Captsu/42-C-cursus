/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elise <elise@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/15 05:37:35 by elise             #+#    #+#             */
/*   Updated: 2026/09/15 05:38:59 by elise            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <limits.h>
#include "ft_printf.h"

int	main(void)
{
	int		r1;
	int		r2;
	char	*str;
	int		n;

	printf("\n========== %%c ==========\n");
	r1 = printf("printf    : [%c] [%c] [%c]\n", 'A', '0', 0);
	r2 = ft_printf("ft_printf : [%c] [%c] [%c]\n", 'A', '0', 0);
	printf("return printf    = %d\n", r1);
	printf("return ft_printf = %d\n", r2);

	printf("\n========== %%s ==========\n");
	r1 = printf("printf    : [%s] [%s]\n", "Hello", "");
	r2 = ft_printf("ft_printf : [%s] [%s]\n", "Hello", "");
	printf("return printf    = %d\n", r1);
	printf("return ft_printf = %d\n", r2);

	printf("\n========== %%d ==========\n");
	r1 = printf("printf    : [%d] [%d] [%d] [%d] [%d]\n",
			0, 42, -42, INT_MAX, INT_MIN);
	r2 = ft_printf("ft_printf : [%d] [%d] [%d] [%d] [%d]\n",
			0, 42, -42, INT_MAX, INT_MIN);
	printf("return printf    = %d\n", r1);
	printf("return ft_printf = %d\n", r2);

	printf("\n========== %%i ==========\n");
	r1 = printf("printf    : [%i] [%i] [%i] [%i] [%i]\n",
			0, 42, -42, INT_MAX, INT_MIN);
	r2 = ft_printf("ft_printf : [%i] [%i] [%i] [%i] [%i]\n",
			0, 42, -42, INT_MAX, INT_MIN);
	printf("return printf    = %d\n", r1);
	printf("return ft_printf = %d\n", r2);

	printf("\n========== %%u ==========\n");
	r1 = printf("printf    : [%u] [%u] [%u] [%u]\n",
			0U, 42U, UINT_MAX, 2147483648U);
	r2 = ft_printf("ft_printf : [%u] [%u] [%u] [%u]\n",
			0U, 42U, UINT_MAX, 2147483648U);
	printf("return printf    = %d\n", r1);
	printf("return ft_printf = %d\n", r2);

	printf("\n========== %%x ==========\n");
	r1 = printf("printf    : [%x] [%x] [%x] [%x] [%x]\n",
			0U, 1U, 42U, 255U, UINT_MAX);
	r2 = ft_printf("ft_printf : [%x] [%x] [%x] [%x] [%x]\n",
			0U, 1U, 42U, 255U, UINT_MAX);
	printf("return printf    = %d\n", r1);
	printf("return ft_printf = %d\n", r2);

	printf("\n========== %%X ==========\n");
	r1 = printf("printf    : [%X] [%X] [%X] [%X] [%X]\n",
			0U, 1U, 42U, 255U, UINT_MAX);
	r2 = ft_printf("ft_printf : [%X] [%X] [%X] [%X] [%X]\n",
			0U, 1U, 42U, 255U, UINT_MAX);
	printf("return printf    = %d\n", r1);
	printf("return ft_printf = %d\n", r2);

	printf("\n========== %%p ==========\n");
	n = 42;
	str = "Hello";
	r1 = printf("printf    : [%p] [%p] [%p]\n",
			(void *)&n, (void *)str, (void *)NULL);
	r2 = ft_printf("ft_printf : [%p] [%p] [%p]\n",
			(void *)&n, (void *)str, (void *)NULL);
	printf("return printf    = %d\n", r1);
	printf("return ft_printf = %d\n", r2);

	printf("\n========== %%%% ==========\n");
	r1 = printf("printf    : [%%] [100%%] [%%%%]\n");
	r2 = ft_printf("ft_printf : [%%] [100%%] [%%%%]\n");
	printf("return printf    = %d\n", r1);
	printf("return ft_printf = %d\n", r2);

	printf("\n========== MIX ==========\n");
	r1 = printf("printf    : %c | %s | %d | %i | %u | %x | %X | %p | %%\n",
			'A', "Hello", -42, INT_MIN, UINT_MAX,
			255U, 255U, (void *)&n);
	r2 = ft_printf("ft_printf : %c | %s | %d | %i | %u | %x | %X | %p | %%\n",
			'A', "Hello", -42, INT_MIN, UINT_MAX,
			255U, 255U, (void *)&n);
	printf("return printf    = %d\n", r1);
	printf("return ft_printf = %d\n", r2);

printf("\n========== FORMAT SIMPLE ==========\n");

r1 = printf("%s", "");
r2 = ft_printf("");
printf("\nempty return printf    = %d\n", r1);
printf("empty return ft_printf = %d\n", r2);

r1 = printf("Hello world\n");
r2 = ft_printf("Hello world\n");
printf("return printf    = %d\n", r1);
printf("return ft_printf = %d\n", r2);

	return (0);
}