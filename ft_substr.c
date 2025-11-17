/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbolea <lbolea@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 18:23:55 by lbolea            #+#    #+#             */
/*   Updated: 2025/11/17 21:50:20 by lbolea           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//#include <stdio.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*str;
	unsigned int	s_len;
	unsigned int	i;

	s_len = ft_strlen(s);
	i = 0;
	str = malloc(len * sizeof(char));
	if (!str)
		return (NULL);
	while (i < len && s_len != 0)
	{
		str[i] = *(char *)&s[start + i];
		i++;
	}
	return (str);
}

// void	test1(void)
//{
//	char	*str;

//	str = "I dont feel so good...\0";
//	printf("%s\n", ft_substr(str, 5, 6));
//}

// void	test2(void)
//{
//	char	*str;

//	str = "";
//	printf("%s\n", ft_substr(str, 5, 6));
//}

// void	test3(void)
//{
//	char	*str;

//	str = "";
//	printf("%s\n", ft_substr(str, 0, 0));
//}

// void	test4(void)
//{
//	char	*str;

//	str = "I dont feel so good...\0";
//	printf("%s\n", ft_substr(str, 0, 30));
//}

// int	main(void)
//{
//	test1();
//	test2();
//	test3();
//	test4();
//	return (0);
//}
