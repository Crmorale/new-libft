/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crmorale <crmorale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 21:31:23 by crmorale          #+#    #+#             */
/*   Updated: 2024/02/14 17:12:33 by crmorale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* SYNOPSIS
     #include <string.h>

     void *
     memchr(const void *s, int c, size_t n);

DESCRIPTION
     The memchr() function locates the first occurrence of c (converted to an
     unsigned char) in string s.

RETURN VALUES
     The memchr() function returns a pointer to the byte located, or NULL if
     no such byte exists within n bytes.*/

	 
#include <stdio.h>
#include <string.h>

void	*ft_memchr(const	void *s, int c, size_t n)
{
	char	*p = (char *)s;
	
	while (n--)
	{
		if (*p != (unsigned char)c)
			p++;
			
		else
			return (p);
	}
	return (NULL);
}
/*
int	main(void)
{
	const char *str = "Boquerones con mortadela";
	const char letter = 'd';
	char	*result = ft_memchr(str, letter, strlen(str));
	
	if (result != NULL)	
		printf(" A partir del caracter |%c| la cadena es |%s|\n", letter, result);
	else
		printf("El caracter |%c| no se encuentra en la cadena. \n", letter);
	
	return (0);
}
*/