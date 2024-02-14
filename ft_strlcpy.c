/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crmorale <crmorale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 12:55:53 by crmorale          #+#    #+#             */
/*   Updated: 2024/02/14 17:12:16 by crmorale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t destsize)
{
	size_t	i;

	i = 0;

	while (i < destsize - 1 && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}

	if (i < destsize)
		dst[i] = '\0';

	while(src[i] != '\0')
		i++;
	
	return (i);

}
/*
int	main(void)
{
	char str1[20] = "123456789";
	char str2[20] = "ABCDEFGHI";
	char str3[20] = "123456789";
	char str4[20] = "abcdefghi";
	char str5[20] = "123456789";
	char str6[20] = "ABCDEFGHI";
	char str7[20] = "1234567890";
	char str8[20] = "abcdefghij";

	size_t c = 9;
	size_t c1 = 22;

	strlcpy(str1, str2, c);
	printf("con strlcpy el dst = %s\n", str1);
	ft_strlcpy(str3, str4, c);
	printf("con ft_strlcpy:  %s\n\n", str3);

	strlcpy(str5, str6, c1);
	printf("con strlcpy str1 = %s\n", str5);
	ft_strlcpy(str7, str8, c1);
	printf("con ft_strlcpy str3 = %s\n", str7);
}
*/
