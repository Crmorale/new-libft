/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crmorale <crmorale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 12:49:17 by crmorale          #+#    #+#             */
/*   Updated: 2024/02/14 17:12:21 by crmorale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Nombre de función
ft_split
Prototipo char **ft_split(char const *s, char c);
Archivos a entregar
-
Parámetros s: La string a separar.
c: El carácter delimitador.
Valor devuelto El array de nuevas strings resultante de la
separación.
NULL si falla la reserva de memoria.
Funciones autorizadas
malloc, free
Descripción Reserva (utilizando malloc(3)) un array de strings
resultante de separar la string ’s’ en substrings
utilizando el caracter ’c’ como delimitador. El
array debe terminar con un puntero NULL.*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int	substr_count(const char *str, char delim)
{
	int	count;
	int	in_substring = 0;
	count = 0;

	
	while (*str)
	{
		if (*str == delim)
			in_substring = 0;
			
		else if (in_substring == 0)
		{
			in_substring = 1;
			count++;
		}
		str++;
	}
	return (count);	
}

char	**ft_split(const char *s, char c)
{
	int	substrings_count, i, j;
	char 	**result, *str_copy, *start; 

	
	substrings_count = substr_count(s, c);
	result = malloc((substrings_count + 1) * sizeof(char	*));
	str_copy = strdup(s); //Crea una copia de la cadena.
	start = str_copy;
	i = 0;
	j = 0;
	
	if (!result)
		return (NULL);

	while (*str_copy)
	{
		if (*str_copy == c)
			{
				*str_copy = '\0';
				if (str_copy != start)
					result[i++] = strdup(start);
				start = str_copy + 1;
			}
		str_copy++;
	}
	
	if (str_copy != start)
		result[i++] = strdup(start);
	result[i] = NULL;

	free(str_copy - strlen(s)); // Liberar cadena copiada (strdup en ft_split)

	return (result);
}
/*
int	main(void)
{
	const	char *str = "Manolo tiene un condensador fotovoltaico";
	char	delim = 'a';
	char	**substrings = ft_split(str, delim);
	int	i = 0;

	if (substrings == NULL)
		printf("La cadena resultante no existe.\n");
		
	if (substrings)
	{
		while (substrings[i])
			{
				printf("La cadena resultante es: %s.\n", substrings[i]);
				free(substrings[i]); // Liberar cada cadena individualmente (strdup en ft_split)
				i++;
			}

	free(substrings); // Liberar array de cadena (malloc en ft_split)
	}
	
	return (0);
}
*/
	

	


	