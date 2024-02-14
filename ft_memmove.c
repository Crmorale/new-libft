/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crmorale <crmorale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 12:55:53 by crmorale          #+#    #+#             */
/*   Updated: 2024/02/14 17:12:30 by crmorale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*d = (char *)dst;
	const	char *s = (const char *) src;

	const	char *lasts = s + (len-1);
	char	*lastd = d + (len -1);

	if (d <= lasts && s >= d)
	{	while  (len--)
			*d++ = *s++;
	}

	else
	{
		while (len--)
			*lastd-- = *lasts--;
	}

	return dst;
}
/*
int	main(void)
{
	char str1[50] = "123456789";
	char str2[50] = "ABCDEFGHI";
	char str3[50] = "123456789";
	char str4[50] = "abcdefghi";
	size_t c = 9;

	char *p1 = str1;
	char *p2 = str2;
	char *p3 = str3;
	char *p4 = str4;

	p2 = p1;
	p4 = p3;

	memmove(str1, str2, c);
	printf("con memmove el str1 = %s\n", str1);
	ft_memmove(str3, str4, c);
	printf("con ft_memmove:  %s\n\n", str3);

	memmove(p1, p2, c);
	printf("con memmove str1 = %s\n", str1);
	ft_memmove(p3, p4, c);
	printf("con ft_memmove str3 = %s\n", str3);
}
*/