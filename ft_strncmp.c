/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbolea <lbolea@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 10:52:37 by lbolea            #+#    #+#             */
/*   Updated: 2025/11/20 15:11:12 by lbolea           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//#include <stdio.h>
//#include <string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if (n == 0)
		return (0);
	while (((s1 && s2) != '\0') && (s1 == s2) && n > 0)
	{
		s1++;
		s2++;
		n--;
	}
	return ((unsigned char *)s2 - (unsigned char *)s1);
}

// void	test1(void)
//{
//	char	*str1;
//	char	*str2;

//	str1 = "123 tu es une oie.\0";
//	str2 = "123 tu es une loi.\0";
//	if (!(ft_strncmp(str1, str2, 10), strncmp(str1, str2, 10)))
//		printf("\033[0;32mOK!\n\033[0m");
//	else
//		printf("\033[0;31mKO\n\033[0m");
//	return ;
//}

// void	test2(void)
//{
//	char	*str1;
//	char	*str2;
//	char	*str3;

//	str1 = "";
//	str2 = "";
//	str3 = "test";
//	if (!(strncmp(str1, str2, 10) && ft_strncmp(str1, str2, 10)))
//		printf("\033[0;32mOK!\n\033[0m");
//	else
//		printf("\033[0;31mKO\n\033[0m");
//	if ((strncmp(str1, str3, 10) && ft_strncmp(str1, str3, 10)))
//		printf("\033[0;32mOK!\n\033[0m");
//	else
//		printf("\033[0;31mKO\n\033[0m");
//	return ;
//}

// void	test3(void)
//{
//	char	*str1;
//	char	*str2;

//	str1 = "/0";
//	str2 = "/0";
//	if (!(ft_strncmp(str1, str2, 10), strncmp(str1, str2, 10)))
//		printf("\033[0;32mOK!\n\033[0m");
//	else
//		printf("\033[0;31mKO\n\033[0m");
//	return ;
//}

// void	test4(void)
//{
//	char	*str1;
//	char	*str2;

//	str1 = "Ceci est un test.";
//	str2 = "Un test est ceci.";
//	if ((ft_strncmp(str1, str2, 10), strncmp(str1, str2, 10)))
//		printf("\033[0;32mOK!\n\033[0m");
//	else
//		printf("\033[0;31mKO\n\033[0m");
//	return ;
//}

// int	main(void)
//{
//	test1();
//	test2();
//	test3();
//	test4();
//}