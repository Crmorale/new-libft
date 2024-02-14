/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crmorale <crmorale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 12:49:17 by crmorale          #+#    #+#             */
/*   Updated: 2024/02/14 17:12:20 by crmorale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* SYNOPSIS
     #include <string.h>

     char *
     strchr(const char *s, int c);

     char *
     strrchr(const char *s, int c);

DESCRIPTION
     The strchr() function locates the first occurrence of c (converted to a 
	 char) in the string pointed to by s.  The terminating null character is
     considered to be part of the string; therefore if c is `\0', the functions 
	 locate the terminating `\0'.

     The strrchr() function is identical to strchr(), except it locates the last 
	 occurrence of c.

RETURN VALUES
     The functions strchr() and strrchr() return a pointer to the located 
	 character, or NULL if the character does not appear in the string.*/

#include <stdio.h>
#include <string.h>

char *ft_strchr(const char *s, int c)
{
	
	while (*s != '\0' && c != *s)
		s++;

	if (c == *s)
		return ((char *)s);
	return (NULL);
}
/*
int	main(void)
{
	const char	*str = "Tírate al báter";
	int letter = 'e';
	char	*resultado = ft_strchr(str, letter);
	
	if (resultado != NULL)
		printf("El cafacter %c se encuentra por vez primera en la posición %ld de la cadena", (char)letter, resultado - str);
	
	else
		printf("El caracter %c no se cuentra en la cadena", (letter));
	
	return (0);
}
*/