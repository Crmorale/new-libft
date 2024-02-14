/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crmorale <crmorale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 12:49:17 by crmorale          #+#    #+#             */
/*   Updated: 2024/02/14 17:12:12 by crmorale         ###   ########.fr       */
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

char *ft_strrchr(const char *s, int c)
{
	char	*result = NULL;
	
	while (*s != '\0')
	{
		if (*s == c)
			result = (char *)s;
		s++;
	}

	if (*s-- == c)
		result = (char *)s;
	
	return (result);
}
/*
int	main(void)
{
	const char	*str = "Tírate al báter";
	int letter = 'e';
	int letter2 ='z';
	char	*resultado = ft_strrchr(str, letter);
	char	*resultado2 = ft_strrchr(str, letter2);
	
	if (resultado != NULL)
		printf("El caracter %c se encuentra por última vez en la posición %ld de la cadena \n", (char)letter, resultado - str);
	
	else
		printf("El caracter %c no se cuentra en la cadena \n", (letter));

		if (resultado2 != NULL)
		printf("El caracter %c se encuentra por última vez en la posición %ld de la cadena", (char)letter2, resultado2 - str);
	
	else
		printf("El caracter %c no se cuentra en la cadena", (letter2));
	
	return (0);
}
*/

