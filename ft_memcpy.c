/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crmorale <crmorale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 12:55:53 by crmorale          #+#    #+#             */
/*   Updated: 2024/02/14 17:12:31 by crmorale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

void	*ft_memcpy(void *restrict dst, const void *src, size_t n)
{
	char	*s1;
	char	*s2;
	size_t	i;

	s1 = (char *)dst;
	s2 = (char *)src;

	i = 0;

	if (dst == NULL && src == NULL)
		return (NULL);
	
	if (n == 0 || s1 == s2)
		return (s1);
	
	while (i < n)
	{
		s1[i] = s2[i];
		i++;
	}
	return (s1);
}
/*
int	main(void)
{
	char str1[50] = "123456789";
	char str2[50] = "ABCDEFGHI";
	char str3[50] = "123456789";
	char str4[50] = "abcdefghij";
	size_t c = 4;

	memcpy(str1, str2, c);
	printf("con memcpy str1 = %s\n", str1);
	ft_memcpy(str3, str4, c);
	printf("con ft_mmemcpy:  %s\n", str3);
}
*/
