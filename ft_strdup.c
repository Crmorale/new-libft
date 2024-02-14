/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crmorale <crmorale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 21:31:23 by crmorale          #+#    #+#             */
/*   Updated: 2024/02/14 17:12:20 by crmorale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*  SYNOPSIS
     #include <string.h>

     char *
     strdup(const char *s1);

     char *
     strndup(const char *s1, size_t n);

DESCRIPTION
     The strdup() function allocates sufficient memory for a copy of the string s1, does the copy, and
     returns a pointer to it.  The pointer may subsequently be used as an argument to the function free(3).

     If insufficient memory is available, NULL is returned and errno is set to ENOMEM.

     The strndup() function copies at most n characters from the string s1 always NUL terminating the copied
     string.*/

	 
#include <stdlib.h>
#include <stdio.h>
#include <string.h>


char	*ft_strdup(const char *s1)
{
	char	*ptr;
	size_t	len;
	size_t	i;

	i = 0;
	
	len = strlen(s1) + 1;	// +1 para el caracter nulo al final
	ptr = malloc(len);
	
	//si malloc falla devolvemos NULL
	if (ptr == NULL)
		return (NULL);

	// Copiar cadena incluyendo caracter nulo	
	while (s1[i] != '\0')
	{
		ptr[i] = s1[i];
		i++;
	}
	ptr[i] = '\0'; //aseguramos que la cadena copiada termine con un carácter nulo.
	
	return (ptr);
}
/*
int	main(void)
{
	char	*original = "Mándale cartas";
	char	*copia = ft_strdup(original);
	
	if (copia == NULL)
	{
		printf("No se puede asignar memoria para copiar la cadena.\n");
		return (1);
	}
	
	printf("Cadena original : %s\n", original);
	printf("Copia de la cadena : %s\n", copia);

	free(copia); // liberamos la memoria

	return (0);
}
*/