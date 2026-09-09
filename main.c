/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emougeno <emougeno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/07 02:11:28 by emougeno          #+#    #+#             */
/*   Updated: 2026/09/07 17:19:06 by emougeno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include "libft.h"

#define GREEN "\033[32m"
#define RED "\033[31m"
#define RESET "\033[0m"

static void	result(char *name, int ok)
{
	if (ok)
		printf(GREEN "[OK] " RESET "%s\n", name);
	else
		printf(RED "[KO] " RESET "%s\n", name);
}

static void	test_strlen(void)
{
	result("ft_strlen empty", ft_strlen("") == strlen(""));
	result("ft_strlen normal",
		ft_strlen("Hello World") == strlen("Hello World"));
}

static void	test_strchr(void)
{
	char	*s;

	s = "bonjour";
	result("ft_strchr found",
		ft_strchr(s, 'j') == strchr(s, 'j'));
	result("ft_strchr missing",
		ft_strchr(s, 'x') == strchr(s, 'x'));
	result("ft_strchr \\0",
		ft_strchr(s, '\0') == strchr(s, '\0'));
}

static void	test_strrchr(void)
{
	char	*s;

	s = "bonjour bonsoir";
	result("ft_strrchr found",
		ft_strrchr(s, 'o') == strrchr(s, 'o'));
	result("ft_strrchr missing",
		ft_strrchr(s, 'x') == strrchr(s, 'x'));
	result("ft_strrchr \\0",
		ft_strrchr(s, '\0') == strrchr(s, '\0'));
}

static void	test_strncmp(void)
{
	result("ft_strncmp equal",
		ft_strncmp("abc", "abc", 3) == 0);

	result("ft_strncmp <", 
		(ft_strncmp("abc", "abd", 3) < 0)
		== (strncmp("abc", "abd", 3) < 0));

	result("ft_strncmp >", 
		(ft_strncmp("abd", "abc", 3) > 0)
		== (strncmp("abd", "abc", 3) > 0));

	result("ft_strncmp n = 0",
		ft_strncmp("abc", "xyz", 0) == 0);
}

static void	test_memset(void)
{
	char	a[10];
	char	b[10];

	memset(a, 'A', 10);
	ft_memset(b, 'A', 10);
	result("ft_memset", memcmp(a, b, 10) == 0);
}

static void	test_bzero(void)
{
	char	a[10];
	char	b[10];

	memset(a, 'A', 10);
	memset(b, 'A', 10);

	bzero(a, 5);
	ft_bzero(b, 5);

	result("ft_bzero", memcmp(a, b, 10) == 0);
}

// static void	test_memcpy(void)
// {
// 	char	src[] = "abcdef";
// 	char	a[20] = {0};
// 	char	b[20] = {0};

// 	memcpy(a, src, 7);
// 	ft_memcpy(b, src, 7);

// 	result("ft_memcpy", memcmp(a, b, 7) == 0);
// }

static void	test_memmove(void)
{
	char	a[] = "abcdef";
	char	b[] = "abcdef";

	memmove(a + 2, a, 4);
	ft_memmove(b + 2, b, 4);

	result("ft_memmove overlap", memcmp(a, b, 6) == 0);
}

static void	test_memchr(void)
{
	char	*s;

	s = "abcdef";

	result("ft_memchr found",
		ft_memchr(s, 'c', 6) == memchr(s, 'c', 6));

	result("ft_memchr missing",
		ft_memchr(s, 'x', 6) == memchr(s, 'x', 6));
}

static void	test_memcmp(void)
{
	result("ft_memcmp equal",
		ft_memcmp("abc", "abc", 3) == 0);

	result("ft_memcmp <",
		(ft_memcmp("abc", "abd", 3) < 0)
		== (memcmp("abc", "abd", 3) < 0));

	result("ft_memcmp >",
		(ft_memcmp("abd", "abc", 3) > 0)
		== (memcmp("abd", "abc", 3) > 0));
}

static void	test_atoi(void)
{
	char	*tests[] = {
		"42",
		"-42",
		"+42",
		"   42",
		"\t\n\r\v\f 42",
		"123abc",
		"-00123",
		"0",
		NULL
	};
	int		i;

	i = 0;
	while (tests[i])
	{
		printf("atoi(\"%s\") : ", tests[i]);
		result("", ft_atoi(tests[i]) == atoi(tests[i]));
		i++;
	}
}

static void	test_ctype(void)
{
	int	c;
	int	ok;

	ok = 1;
	c = 0;
	while (c <= 255)
	{
		if (!!ft_isalpha(c) != !!isalpha(c))
			ok = 0;
		c++;
	}
	result("ft_isalpha", ok);

	ok = 1;
	c = 0;
	while (c <= 255)
	{
		if (!!ft_isdigit(c) != !!isdigit(c))
			ok = 0;
		c++;
	}
	result("ft_isdigit", ok);

	ok = 1;
	c = 0;
	while (c <= 255)
	{
		if (!!ft_isalnum(c) != !!isalnum(c))
			ok = 0;
		c++;
	}
	result("ft_isalnum", ok);

	ok = 1;
	c = 0;
	while (c <= 255)
	{
		if (!!ft_isascii(c) != !!isascii(c))
			ok = 0;
		c++;
	}
	result("ft_isascii", ok);

	ok = 1;
	c = 0;
	while (c <= 255)
	{
		if (!!ft_isprint(c) != !!isprint(c))
			ok = 0;
		c++;
	}
	result("ft_isprint", ok);
}

static void	test_case_conversion(void)
{
	int	c;
	int	ok;

	ok = 1;
	c = 0;
	while (c <= 255)
	{
		if (ft_toupper(c) != toupper(c))
			ok = 0;
		c++;
	}
	result("ft_toupper", ok);

	ok = 1;
	c = 0;
	while (c <= 255)
	{
		if (ft_tolower(c) != tolower(c))
			ok = 0;
		c++;
	}
	result("ft_tolower", ok);
}

static void	test_strdup(void)
{
	char	*a;
	char	*b;

	a = strdup("Hello 42");
	b = ft_strdup("Hello 42");

	result("ft_strdup", a && b && strcmp(a, b) == 0);

	free(a);
	free(b);
}

// static void	test_calloc(void)
// {
// 	unsigned char	*a;
// 	unsigned char	*b;

// 	a = calloc(10, 1);
// 	b = ft_calloc(10, 1);

// 	result("ft_calloc",
// 		a && b && memcmp(a, b, 10) == 0);

// 	free(a);
// 	free(b);
// }

int	main(void)
{
	printf("\n--- STRING ---\n");
	test_strlen();
	test_strchr();
	test_strrchr();
	test_strncmp();

	printf("\n--- MEMORY ---\n");
	test_memset();
	test_bzero();
	// test_memcpy();
	test_memmove();
	test_memchr();
	test_memcmp();

	printf("\n--- CONVERSION ---\n");
	test_atoi();
	test_ctype();
	test_case_conversion();

	printf("\n--- ALLOCATION ---\n");
	test_strdup();
	// test_calloc();

	return (0);
}