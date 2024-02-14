/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crmorale <crmorale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 12:55:53 by crmorale          #+#    #+#             */
/*   Updated: 2024/02/14 17:12:19 by crmorale         ###   ########.fr       */
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

void	ft_toupper_if_even(unsigned int i, char *c)
{
	if (i % 2 == 0 && *c >= 'a' && *c <= 'z')
		*c = (*c - 32);
}

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned	int i;

	i = 0;
	

	if (!s || !f)
		return;
	
	while (s[i])
	{	
		//llamamos a f, pasando el índice i y un puntero al char en i de s.
		f(i, &s[i]);
		i++;
	}
	
}
/*	
int	main(void)
	{
		char	string []= "Albóngidas de Armenia, Cáceres y Kenia";
		ft_striteri(string, ft_toupper_if_even);

			printf("La cadena resultante es: %s.\n", string);
		
		return (0);
	}
*/
	
	
	
	
	
