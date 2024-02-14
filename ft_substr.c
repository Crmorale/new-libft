/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crmorale <crmorale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 21:31:23 by crmorale          #+#    #+#             */
/*   Updated: 2024/02/14 17:12:09 by crmorale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*  Prototipo char *ft_substr(char const *s, unsigned int start,
size_t len);
Archivos a entregar
-
Parámetros s: La string desde la que crear la substring.
start: El índice del caracter en ’s’ desde el que
empezar la substring.
len: La longitud máxima de la substring.
Valor devuelto La substring resultante.
NULL si falla la reserva de memoria.
Funciones autorizadas
malloc
Descripción Reserva (con malloc(3)) y devuelve una substring de
la string ’s’.
La substring empieza desde el índice ’start’ y
tiene una longitud máxima ’len’.*/

	 
#include <stdlib.h>
#include <stdio.h>
#include <string.h>


char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;

	sub = malloc(len + 1);
	i = 0;
	
	if (sub == NULL) // devolver NULL si malloc falla
		return (NULL);
		
	while (i < len && s[start + i] != '\0') // Copiar cadena incluyendo caracter nulo	
		{
			sub[i] = s[start + i];
			i++;
		}
	sub [i] = '\0'; // Asegurarse de que la subcadena acaba en carácter nulo.
	
	return (sub);
}
/*
int	main(void)
{
	char	*original = "Tocando el silbato estaban todos";
	char	*sub = ft_substr(original,11, 24);
	
	if (sub == NULL)
	{
		printf("No se puede asignar memoria para copiar parte de la cadena.\n");
		return (1);
	}
	
	printf("Cadena original : %s\n", original);
	printf("Parte de la cadena : %s\n", sub);

	free(sub); // liberamos la memoria

	return (0);
}
*/