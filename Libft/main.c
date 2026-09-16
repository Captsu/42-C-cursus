/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elise <elise@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/15 17:21:56 by elise             #+#    #+#             */
/*   Updated: 2026/09/15 17:21:59 by elise            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

static void	title(const char *name)
{
	printf("\n========== %s ==========\n", name);
}

/* ************************************************************************** */
/* CHARACTER FUNCTIONS                                                        */
/* ************************************************************************** */

static void	test_char_functions(void)
{
	int	tests[] = {'A', 'z', '0', '9', ' ', '\n', '@', 127, -1};
	int	n = sizeof(tests) / sizeof(tests[0]);
	int	i;

	title("CHARACTER FUNCTIONS");
	i = 0;
	while (i < n)
	{
		printf("c = %4d | ", tests[i]);
		printf("isalpha: %d/%d | ", !!ft_isalpha(tests[i]), !!isalpha(tests[i]));
		printf("isdigit: %d/%d | ", !!ft_isdigit(tests[i]), !!isdigit(tests[i]));
		printf("isalnum: %d/%d | ", !!ft_isalnum(tests[i]), !!isalnum(tests[i]));
		printf("isascii: %d/%d | ", !!ft_isascii(tests[i]),
			(tests[i] >= 0 && tests[i] <= 127));
		printf("isprint: %d/%d\n", !!ft_isprint(tests[i]), !!isprint(tests[i]));
		i++;
	}
	printf("toupper('a') = %c / %c\n", ft_toupper('a'), toupper('a'));
	printf("toupper('Z') = %c / %c\n", ft_toupper('Z'), toupper('Z'));
	printf("tolower('A') = %c / %c\n", ft_tolower('A'), tolower('A'));
	printf("tolower('z') = %c / %c\n", ft_tolower('z'), tolower('z'));
}

/* ************************************************************************** */
/* STRING FUNCTIONS                                                           */
/* ************************************************************************** */

static void	test_strlen(void)
{
	title("FT_STRLEN");
	printf("\"Hello\"   : %zu / %zu\n", ft_strlen("Hello"), strlen("Hello"));
	printf("\"\"        : %zu / %zu\n", ft_strlen(""), strlen(""));
	printf("\"42 Paris\": %zu / %zu\n", ft_strlen("42 Paris"), strlen("42 Paris"));
}

static void	test_strchr(void)
{
	char	*s = "Hello World";

	title("FT_STRCHR");
	printf("search 'o' : %s / %s\n", ft_strchr(s, 'o'), strchr(s, 'o'));
	printf("search 'W' : %s / %s\n", ft_strchr(s, 'W'), strchr(s, 'W'));
	printf("search '\\0': %s\n", ft_strchr(s, '\0'));
	printf("search 'z' : %p / %p\n",
		(void *)ft_strchr(s, 'z'), (void *)strchr(s, 'z'));
}

static void	test_strrchr(void)
{
	char	*s = "Hello World";

	title("FT_STRRCHR");
	printf("search 'o' : %s / %s\n", ft_strrchr(s, 'o'), strrchr(s, 'o'));
	printf("search 'l' : %s / %s\n", ft_strrchr(s, 'l'), strrchr(s, 'l'));
	printf("search 'z' : %p / %p\n",
		(void *)ft_strrchr(s, 'z'), (void *)strrchr(s, 'z'));
}

static void	test_strncmp(void)
{
	title("FT_STRNCMP");
	printf("abc / abc / 3 : %d / %d\n",
		ft_strncmp("abc", "abc", 3), strncmp("abc", "abc", 3));
	printf("abc / abd / 3 : %d / %d\n",
		ft_strncmp("abc", "abd", 3), strncmp("abc", "abd", 3));
	printf("abc / abd / 2 : %d / %d\n",
		ft_strncmp("abc", "abd", 2), strncmp("abc", "abd", 2));
	printf("abc / ab / 3  : %d / %d\n",
		ft_strncmp("abc", "ab", 3), strncmp("abc", "ab", 3));
	printf("abc / xyz / 0 : %d / %d\n",
		ft_strncmp("abc", "xyz", 0), strncmp("abc", "xyz", 0));
}

static void	test_strnstr(void)
{
	title("FT_STRNSTR");
	printf("World in Hello World: %s\n",
		ft_strnstr("Hello World", "World", 11));
	printf("World len 5         : %p\n",
		(void *)ft_strnstr("Hello World", "World", 5));
	printf("empty needle        : %s\n",
		ft_strnstr("Hello", "", 5));
	printf("not found           : %p\n",
		(void *)ft_strnstr("Hello", "xyz", 5));
}

static void	test_strlcpy(void)
{
	char	dst[20];
	size_t	ret;

	title("FT_STRLCPY");
	ret = ft_strlcpy(dst, "Hello World", sizeof(dst));
	printf("normal : \"%s\" ret=%zu\n", dst, ret);

	ret = ft_strlcpy(dst, "Hello World", 6);
	printf("size 6 : \"%s\" ret=%zu\n", dst, ret);

	ret = ft_strlcpy(dst, "", sizeof(dst));
	printf("empty  : \"%s\" ret=%zu\n", dst, ret);
}

static void	test_strlcat(void)
{
	char	dst[20];
	size_t	ret;

	title("FT_STRLCAT");

	strcpy(dst, "Hello ");
	ret = ft_strlcat(dst, "World", sizeof(dst));
	printf("normal  : \"%s\" ret=%zu\n", dst, ret);

	strcpy(dst, "Hello ");
	ret = ft_strlcat(dst, "World", 9);
	printf("size 9  : \"%s\" ret=%zu\n", dst, ret);

	strcpy(dst, "");
	ret = ft_strlcat(dst, "42", sizeof(dst));
	printf("empty   : \"%s\" ret=%zu\n", dst, ret);
}

/* ************************************************************************** */
/* MEMORY FUNCTIONS                                                           */
/* ************************************************************************** */

static void	test_memset(void)
{
	char	a[10] = "123456789";
	char	b[10] = "123456789";

	title("FT_MEMSET");
	ft_memset(a, 'X', 5);
	memset(b, 'X', 5);
	printf("libft : %s\n", a);
	printf("libc  : %s\n", b);
}

static void	test_bzero(void)
{
	char	buf[10] = "abcdefghi";
	int		i;

	title("FT_BZERO");
	ft_bzero(buf + 2, 4);
	i = 0;
	while (i < 10)
	{
		printf("%d ", (unsigned char)buf[i]);
		i++;
	}
	printf("\n");
}

static void	test_memcpy(void)
{
	char	src[] = "Hello";
	char	dst[20];

	title("FT_MEMCPY");
	ft_memcpy(dst, src, sizeof(src));
	printf("result: %s\n", dst);
}

static void	test_memmove(void)
{
	char	a[20] = "123456789";
	char	b[20] = "123456789";

	title("FT_MEMMOVE");

	ft_memmove(a + 2, a, 5);
	memmove(b + 2, b, 5);

	printf("overlap libft: %s\n", a);
	printf("overlap libc : %s\n", b);

	strcpy(a, "123456789");
	strcpy(b, "123456789");

	ft_memmove(a, a + 2, 5);
	memmove(b, b + 2, 5);

	printf("reverse libft: %s\n", a);
	printf("reverse libc : %s\n", b);
}

static void	test_memchr(void)
{
	char	*s = "abcdef";

	title("FT_MEMCHR");
	printf("find c : %s\n", (char *)ft_memchr(s, 'c', 6));
	printf("find z : %p\n", ft_memchr(s, 'z', 6));
	printf("len 2  : %p\n", ft_memchr(s, 'c', 2));
}

static void	test_memcmp(void)
{
	title("FT_MEMCMP");
	printf("abc/abc : %d / %d\n",
		ft_memcmp("abc", "abc", 3), memcmp("abc", "abc", 3));
	printf("abc/abd : %d / %d\n",
		ft_memcmp("abc", "abd", 3), memcmp("abc", "abd", 3));
	printf("abc/xyz n=0 : %d / %d\n",
		ft_memcmp("abc", "xyz", 0), memcmp("abc", "xyz", 0));
}

static void	test_calloc(void)
{
	int	*p;
	int	i;

	title("FT_CALLOC");
	p = ft_calloc(5, sizeof(int));
	if (!p)
	{
		printf("calloc returned NULL\n");
		return ;
	}
	i = 0;
	while (i < 5)
	{
		printf("%d ", p[i]);
		i++;
	}
	printf("\n");
	free(p);
}

/* ************************************************************************** */
/* ALLOCATION / STRING CREATION                                               */
/* ************************************************************************** */

static void	test_strdup(void)
{
	char	*s;

	title("FT_STRDUP");
	s = ft_strdup("Hello 42!");
	printf("result: \"%s\"\n", s);
	free(s);

	s = ft_strdup("");
	printf("empty : \"%s\"\n", s);
	free(s);
}

static void	test_substr(void)
{
	char	*s;

	title("FT_SUBSTR");

	s = ft_substr("Hello World", 6, 5);
	printf("start 6 len 5  : \"%s\"\n", s);
	free(s);

	s = ft_substr("Hello", 0, 2);
	printf("start 0 len 2  : \"%s\"\n", s);
	free(s);

	s = ft_substr("Hello", 100, 5);
	printf("start > strlen : \"%s\"\n", s);
	free(s);

	s = ft_substr("", 0, 10);
	printf("empty source   : \"%s\"\n", s);
	free(s);
}

static void	test_strjoin(void)
{
	char	*s;

	title("FT_STRJOIN");

	s = ft_strjoin("Hello ", "World");
	printf("\"Hello \" + \"World\" = \"%s\"\n", s);
	free(s);

	s = ft_strjoin("", "42");
	printf("\"\" + \"42\" = \"%s\"\n", s);
	free(s);

	s = ft_strjoin("", "");
	printf("\"\" + \"\" = \"%s\"\n", s);
	free(s);
}

static void	test_strtrim(void)
{
	char	*s;

	title("FT_STRTRIM");

	s = ft_strtrim("   Hello World   ", " ");
	printf("spaces : \"%s\"\n", s);
	free(s);

	s = ft_strtrim("xxxHello Worldxxx", "x");
	printf("x      : \"%s\"\n", s);
	free(s);

	s = ft_strtrim("abcHelloabc", "abc");
	printf("abc    : \"%s\"\n", s);
	free(s);

	s = ft_strtrim("xxxxx", "x");
	printf("all    : \"%s\"\n", s);
	free(s);
}

static void	print_split(char **tab)
{
	int	i;

	if (!tab)
	{
		printf("NULL\n");
		return ;
	}
	i = 0;
	while (tab[i])
	{
		printf("[%d] = \"%s\"\n", i, tab[i]);
		free(tab[i]);
		i++;
	}
	printf("[%d] = NULL\n", i);
	free(tab);
}

static void	test_split(void)
{
	title("FT_SPLIT");

	printf("\nNormal:\n");
	print_split(ft_split("Hello World 42 Paris", ' '));

	printf("\nMultiple separators:\n");
	print_split(ft_split("///Hello///World////42///", '/'));

	printf("\nOnly separators:\n");
	print_split(ft_split("     ", ' '));

	printf("\nEmpty string:\n");
	print_split(ft_split("", ' '));

	printf("\nNo separator:\n");
	print_split(ft_split("Hello", ' '));
}

static void	test_itoa(void)
{
	int		values[] = {0, 1, -1, 42, -42, 2147483647, -2147483647 - 1};
	int		i;
	char	*s;

	title("FT_ITOA");
	i = 0;
	while (i < 7)
	{
		s = ft_itoa(values[i]);
		printf("%d -> \"%s\"\n", values[i], s);
		free(s);
		i++;
	}
}

/* ************************************************************************** */
/* FUNCTION POINTER FUNCTIONS                                                 */
/* ************************************************************************** */

static char	map_upper(unsigned int i, char c)
{
	(void)i;
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}

static void	iter_upper(unsigned int i, char *c)
{
	(void)i;
	if (*c >= 'a' && *c <= 'z')
		*c -= 32;
}

static void	test_strmapi(void)
{
	char	*s;

	title("FT_STRMAPI");
	s = ft_strmapi("Hello world!", map_upper);
	printf("result: \"%s\"\n", s);
	free(s);
}

static void	test_striteri(void)
{
	char	s[] = "Hello world!";

	title("FT_STRITERI");
	ft_striteri(s, iter_upper);
	printf("result: \"%s\"\n", s);
}

/* ************************************************************************** */
/* CONVERSION                                                                 */
/* ************************************************************************** */

static void	test_atoi(void)
{
	char	*tests[] = {
		"42",
		"-42",
		"+42",
		"   42",
		"\t\n\r\v\f 42",
		"0042",
		"42abc",
		"-00123abc",
		"0",
		"-0"
	};
	int	i;

	title("FT_ATOI");
	i = 0;
	while (i < 10)
	{
		printf("\"%s\" -> %d / %d\n",
			tests[i], ft_atoi(tests[i]), atoi(tests[i]));
		i++;
	}
}

/* ************************************************************************** */
/* FD FUNCTIONS                                                               */
/* ************************************************************************** */

static void	test_fd_functions(void)
{
	title("FD FUNCTIONS");

	printf("ft_putchar_fd: ");
	ft_putchar_fd('A', 1);
	printf("\n");

	printf("ft_putstr_fd : ");
	ft_putstr_fd("Hello 42", 1);
	printf("\n");

	printf("ft_putendl_fd: ");
	ft_putendl_fd("Hello 42", 1);

	printf("ft_putnbr_fd : ");
	ft_putnbr_fd(42, 1);
	printf("\n");

	printf("INT_MIN      : ");
	ft_putnbr_fd(-2147483647 - 1, 1);
	printf("\n");

	printf("INT_MAX      : ");
	ft_putnbr_fd(2147483647, 1);
	printf("\n");
}

/* ************************************************************************** */
/* MAIN                                                                       */
/* ************************************************************************** */

int	main(void)
{
	test_char_functions();
	test_strlen();
	test_strchr();
	test_strrchr();
	test_strncmp();
	test_strnstr();
	test_strlcpy();
	test_strlcat();

	test_memset();
	test_bzero();
	test_memcpy();
	test_memmove();
	test_memchr();
	test_memcmp();

	test_atoi();
	test_calloc();
	test_strdup();
	test_substr();
	test_strjoin();
	test_strtrim();
	test_split();
	test_itoa();
	test_strmapi();
	test_striteri();

	test_fd_functions();

	printf("\n========== END OF TESTS ==========\n");
	return (0);
}