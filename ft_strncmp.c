/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crmorale <crmorale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 12:49:17 by crmorale          #+#    #+#             */
/*   Updated: 2024/02/14 17:12:14 by crmorale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* SYNOPSIS
     #include <string.h>

     int
     strcmp(const char *s1, const char *s2);

     int
     strncmp(const char *s1, const char *s2, size_t n);

DESCRIPTION
     The strcmp() and strncmp() functions lexicographically compare the null-
     terminated strings s1 and s2.

     The strncmp() function compares not more than n characters.  Because
     strncmp() is designed for comparing strings rather than binary data,
     characters that appear after a `\0' character are not compared.

RETURN VALUES
     The strcmp() and strncmp() functions return an integer greater than,
     equal to, or less than 0, according as the string s1 is greater than,
     equal to, or less than the string s2.  The comparison is done using
     unsigned characters, so that `\200' is greater than `\0'.*/

#include <stdio.h>
#include <string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while (n--)
	{
		if (*s1 != *s2)
			return *(unsigned char *)s1 - *(unsigned char *)s2;
		else if (*s1 == '\0' || *s2 == '\0')
			return 0;
		s1++;
		s2++;
	}
	return (0);
}
/*
int	main(void)
{
	const	char *s1 = "Albaricoque";
	const	char *s2 = "Albano";
	const	char *s3 = "Colador";
	const	char *s4 = "Colarse";
	const	char *s5 = "Albaricoque";
	const	char *s6 = "Albaricoque";
	size_t	num = 6;
	int 	result_dif1 = ft_strncmp (s1, s2, num);
	int 	result_dif2 = ft_strncmp (s3, s4, num);
	int 	result_dif3 = ft_strncmp (s5, s6, num);
	
	printf("La diferencia entre s1 y s2 es: %d\n", result_dif1);
	printf("La diferencia entre s3 y s4 es: %d\n", result_dif2);
	printf("La diferencia entre s5 y s6 es: %d\n", result_dif3);
	
	return (0);
}
*/

