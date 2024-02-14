/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crmorale <crmorale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 12:55:53 by crmorale          #+#    #+#             */
/*   Updated: 2024/02/14 17:12:14 by crmorale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*  Nombre de función
ft_strmapi
Prototipo char *ft_strmapi(char const *s, char (*f)(unsigned
int, char));
Archivos a entregar
-
Parámetros s: La string que iterar.
f: La función a aplicar sobre cada carácter.
Valor devuelto La string creada tras el correcto uso de ’f’ sobre
cada carácter.
NULL si falla la reserva de memoria.
Funciones autorizadas
malloc
Descripción A cada carácter de la string ’s’, aplica la
función ’f’ dando como parámetros el índice de cada
carácter dentro de ’s’ y el propio carácter. Genera
una nueva string con el resultado del uso sucesivo
de ’f’*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	ft_toupper_if_even(unsigned int i, char c)
{
	if (i % 2 == 0 && c >= 'a' && c <= 'z')
		return (c - 32);
	
	else
		return (c);
}

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	unsigned	int i;

	i = 0;
	
	
	str = malloc(sizeof(char) * strlen(s) + 1);

	if (!str)
		return (NULL);

	if (!s || !f)
		return (NULL);
	
	while (s[i])
	{	
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	
	return (str);
}
/*
	int	main(void)
	{
		char	*string = "Albóngidas de Armenia, Cáceres y Kenia";
		char	*result = ft_strmapi(string, ft_toupper_if_even);

		if (result)
		{
			printf("La cadena resultante es: %s.\n", result);
			free(result);
		}
		
		return (0);
	}
	*/
	
	
	
	
	
