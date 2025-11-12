/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbolea <lbolea@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 22:03:08 by lbolea            #+#    #+#             */
/*   Updated: 2025/11/12 23:18:04 by lbolea           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	unsigned int	s_len;

	s_len = 0;
	while (s[s_len] != '\0')
		s_len++;
	if (c == '\0')
		return ((char *)&s[s_len]);
	while (s_len > 0)
	{
		if (c == s[s_len])
			return ((char *)&s[s_len]);
		s_len--;
	}
	return (NULL);
}

void	test1(void)
{
	char	str1[10] = "ABCDEFG\0";
	int		schr;

	schr = 'E';
	printf("	NORMAL\n");
	printf("R:%s\n", strrchr(str1, schr));
	printf("M:%s\n", ft_strrchr(str1, schr));
	if (!(strcmp(ft_strrchr(str1, schr), strrchr(str1, schr))))
		printf("\033[0;32mOK!\n\033[0m");
	else
		printf("\033[0;31mKO\n\033[0m");
}

void	test2(void)
{
	char	str1[10] = "ABCDEFG\0";
	int		schr;

	schr = 'L';
	printf("	WRONG CAR\n");
	printf("R:%s\n", strrchr(str1, schr));
	printf("M:%s\n", ft_strrchr(str1, schr));
	if (!(ft_strrchr(str1, schr), strrchr(str1, schr)))
		printf("\033[0;32mOK!\n\033[0m");
	else
		printf("\033[0;31mKO\n\033[0m");
}

void	test3(void)
{
	char	str1[10] = "ABCDEFG\0";
	int		schr;

	schr = '\0';
	printf("	STRING NULL\n");
	printf("R:%s\n", strrchr(str1, schr));
	printf("M:%s\n", ft_strrchr(str1, schr));
	if ((ft_strrchr(str1, schr) == strrchr(str1, schr)))
		printf("\033[0;32mOK!\n\033[0m");
	else
		printf("\033[0;31mKO\n\033[0m");
}

void	test4(void)
{
	char	str1[10] = "";
	int		schr;

	schr = 'A';
	printf("	EMPTY STRING\n");
	printf("R:%s\n", strrchr(str1, schr));
	printf("M:%s\n", ft_strrchr(str1, schr));
	if ((ft_strrchr(str1, schr) == strrchr(str1, schr)))
		printf("\033[0;32mOK!\n\033[0m");
	else
		printf("\033[0;31mKO\n\033[0m");
}

int	main(void)
{
	test1();
	test2();
	test3();
	test4();
	return (0);
}