/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbolea <lbolea@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 17:26:40 by lbolea            #+#    #+#             */
/*   Updated: 2025/11/11 19:06:49 by lbolea           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;

	d = dest;
	s = (unsigned char *)src;
	if (n == 0 || dest == src)
		return (dest);
	if (d > s && d < s + n)
	{
		while (n--)
			d[n] = s[n];
	}
	else
	{
		while (n--)
			*d++ = *s++;
	}
	return (dest);
}

void	test1(void)
{
	char	str1[10] = "ABCDEFG";
	char	str2[10] = "ABCDEFGHI";
	char	str3[10] = "ABCDEFG";
	char	str4[10] = "ABCDEFGHI";
	int		buff;

	buff = 9;
	printf("	2 DIFFERENTS STRINGS ");
	ft_memmove(str1, str2, buff);
	memmove(str3, str4, buff);
	if (!(strcmp(str1, str3)))
		printf("\033[0;32mOK!\n\033[0m");
	else
		printf("\033[0;31mKO\n\033[0m");
}

void	test2(void)
{
	char	str1[20] = "ABCDEFGHIJ";
	char	str2[20] = "ABCDEFGHIJ";
	int		buff;

	buff = 5;
	printf("	SAME STRING OVERLAP ");
	ft_memmove(str1 + buff, str1, buff);
	memmove(str2 + buff, str2, buff);
	if (!(memcmp(str1, str2, 20)))
		printf("\033[0;32mOK!\n\033[0m");
	else
		printf("\033[0;31mKO\n\033[0m");
}

int	main(void)
{
	test1();
	test2();
}
