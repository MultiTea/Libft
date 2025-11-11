/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbolea <lbolea@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 16:32:34 by lbolea            #+#    #+#             */
/*   Updated: 2025/11/11 16:19:48 by lbolea           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bsd/string.h>
#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

size_t	ft_strlcat(char *dst, const char *src, size_t siz)
{
	size_t	d_len;
	size_t	s_len;

	s_len = 0;
	d_len = 0;
	while (dst[d_len] != '\0' && d_len < siz)
		d_len++;
	while (src[s_len] != '\0' && siz > (d_len + s_len + 1))
	{
		dst[d_len + s_len] = src[s_len];
		s_len++;
	}
	if (d_len >= siz)
		return (siz + s_len);
	if (d_len + s_len < siz)
		dst[d_len + s_len] = '\0';
	while (src[s_len] != '\0')
		s_len++;
	return (d_len + s_len);
}

void	segfault_handler(int signal)
{
	(void)signal;
	printf("\033[0;31m");
	printf("SEGFAULT ");
	printf("\033[0;32m");
	printf("OK!\n");
	printf("\033[0m");
	exit(1);
}

int	test1(void)
{
	int		buff;
	char	ok[12] = "coucou";
	char	oks[12] = "hello";
	char	ko[12] = "coucou";
	char	kos[12] = "hello";
	size_t	result1;
	size_t	result2;

	buff = 12;
	ok[11] = '\0';
	oks[11] = '\0';
	ko[11] = '\0';
	kos[11] = '\0';
	printf("--- 2 DIFFERENT STRINGS WITH SMALL BUFFER ---\n");
	result1 = ft_strlcat(ko, kos, buff);
	result2 = strlcat(ok, oks, buff);
	if (result1 == result2)
	{
		printf("\033[0;32m");
		printf("OK!\n");
		printf("\033[0m");
	}
	else
	{
		printf("NOT OK!\n");
		printf("%zu != %zu", result1, result2);
	}
	return (0);
}

int	test2(void)
{
	char	ko[12] = "coucou";

	ko[11] = '\0';
	printf("\n--- SAME STRING ---\n");
	signal(SIGSEGV, segfault_handler);
	ft_strlcat(ko, ko, 29);
	return (0);
}

int	test3(void)
{
	char	ok[12] = "coucou";

	ok[11] = '\0';
	printf("\n--- TEST 3 ---\nOG:\n%s\n", ok);
	signal(SIGSEGV, segfault_handler);
	printf("%zu\n", strlcat(ok, ok, 29));
	return (0);
}

int	main(void)
{
	test1();
	test2();
	test3();
	return (0);
}