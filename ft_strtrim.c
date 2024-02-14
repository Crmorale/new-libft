/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crmorale <crmorale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 12:49:17 by crmorale          #+#    #+#             */
/*   Updated: 2024/02/14 17:12:11 by crmorale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Nombre de función
ft_strtrim
Prototipo char *ft_strtrim(char const *s1, char const *set);
Archivos a entregar
-
Parámetros s1: La string que debe ser recortada.
set: Los caracteres a eliminar de la string.
Valor devuelto La string recortada.
NULL si falla la reserva de memoria.
Funciones autorizadas
malloc
Descripción Elimina todos los caracteres de la string ’set’
desde el principio y desde el final de ’s1’, hasta
encontrar un caracter no perteneciente a ’set’. La
string resultante se devuelve con una reserva de
malloc(3)*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int is_in_set(char c, const char *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set ++;
	}
	return (0);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	size_t	start;
	size_t	end;
	char	*new_string;

	start = 0;
	end = strlen(s1);
	new_string = malloc (end -end +1);
	
	while (s1[start] && is_in_set(s1[start], set))
		start++;

	while (end > start && is_in_set(s1[end - 1], set))
		end--;
		
	if (new_string == NULL)
		return (NULL);
		
	strncpy(new_string, &s1[start], end - start);
	new_string[end - start] = '\0';
	return (new_string);
}

/*
int	main(void)
{
	const	char *str = "manolo tiene una mano";
	const	char	*trim = "amno";
	char	*result = ft_strtrim(str, trim);

	


	
	if (result == NULL)
		printf("No existe cadena resultante.\n");

	if (*result)
		printf("La cadena resultante es: %s.\n", result);

	return (0);
}
*/