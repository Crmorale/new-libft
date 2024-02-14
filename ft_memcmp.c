/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crmorale <crmorale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 21:31:23 by crmorale          #+#    #+#             */
/*   Updated: 2024/02/14 17:12:32 by crmorale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* SYNOPSIS
     #include <string.h>

     int
     memcmp(const void *s1, const void *s2, size_t n);

DESCRIPTION
     The memcmp() function compares byte string s1 against byte string s2.  Both strings are assumed to
     be n bytes long.

RETURN VALUES
     The memcmp() function returns zero if the two strings are identical, otherwise returns the differ-
     ence between the first two differing bytes (treated as unsigned char values, so that `\200' is
     greater than `\0', for example).  Zero-length strings are always identical.  This behavior is not
     required by C and portable code should only depend on the sign of the returned value.*/

	 
#include <stdio.h>
#include <string.h>

int	ft_memcmp(const	void *s1, const	void *s2, size_t n)
{
	unsigned	char	*p1 = ( unsigned char *)s1;
	unsigned 	char	*p2 = (unsigned char *) s2;
	

	while (n--)
	{
		if (*p1 != *p2)
			return (*p1 - *p2);
			p1++;
			p2++;
	}
	return (0);
}
/*
int	main(void)
{
	const char *str1 = "Boquerones con mortadela";
	const char *str2 = "Boquerones con salchichas";
	int	result = ft_memcmp(str1, str2, strlen(str1));
	
		printf("El resultado de comparar las cadenas es %d\n", result);
	return (0);
}

*/