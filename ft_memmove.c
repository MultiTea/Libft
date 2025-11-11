/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbolea <lbolea@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 17:26:40 by lbolea            #+#    #+#             */
/*   Updated: 2025/11/11 18:03:52 by lbolea           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;
	unsigned char	*tmp;
	size_t			i;

	d = dest;
	s = (unsigned char *)src;
	tmp[n] = 0;
	i = 0;
	while (i < n)
	{
		tmp[i] = s[i];
		i++;
	}
	while (i != 0)
	{
		d[i] = tmp[i];
		i--;
	}
	return (dest);
}

void	test1(void)
{
	char	str1[10] = "À droite";
	char	str2[10] = "À gauche";
	char	str3[10] = "À droite";
	char	str4[10] = "À gauche";
	int		buff;

	str1[9] = '\0';
	str2[9] = '\0';
	str3[9] = '\0';
	str4[9] = '\0';
	buff = 8;
	printf("%s -> %s\n", str1, str2);
	printf("%s -> %s\n", str3, str4);
	ft_memmove(str1 + 2, str2, buff);
	memmove(str3 + 2, str4, buff);
	printf("%s <- %s\n", str1, str2);
	printf("%s <- %s\n", str3, str4);
}

int	main(void)
{
	test1();
}
