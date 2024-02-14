/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crmorale <crmorale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 12:55:53 by crmorale          #+#    #+#             */
/*   Updated: 2024/02/14 17:12:34 by crmorale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*  Nombre de función
ft_itoa
Prototipo char *ft_itoa(int n);
Archivos a entregar
-
Parámetros n: el entero a convertir.
Valor devuelto La string que represente el número.
NULL si falla la reserva de memoria.
Funciones autorizadas
malloc
Descripción Utilizando malloc(3), genera una string que
represente el valor entero recibido como argumento.
Los números negativos tienen que gestionarse.*/

#include <stdio.h>
#include <stdlib.h>

int	ft_stringlen(int n)
{
	int	len;

	len = 0;
	
	// si n es neg. lo convierte en pos. e incrementa len (poner signo -)
		
	if (n <= 0) 
	{	
		len++;
		n = -n;
	}
	
	while (n > 0) // dividir el número entre 10 y recontar len
	{
		len++;
		n /= 10;
	}
	
	return (len);
}	


char	*ft_itoa(int n)
{
	char	*str;
	int	len;
	int	is_negative;
	
	is_negative = n < 0;
	len = ft_stringlen(n);
	str = malloc((len + 1) * sizeof(char));
	
	if (!str) 
		return (NULL); // verificamos si malloc ha podido reservar memoria

	str[len] = '\0'; // coloca caracter nulo al final de la cadena
	
	if (is_negative) // si n es neg. colocar signo - y convertir en pos.
	{
		str[0] = '-';
		n = -n;
	}
	
	if (n == 0)  //  manejar casos en que n es 0
		str[0] = '0';
		
	while (len > 0 && n > 0) // procesa dígitos del número
	{
		// convierte último dígito en caracter y lo coloca en la cadena
		str[--len] = (n % 10) + '0'; 
		n /= 10; //elimina últ dígito del número
	}
	
	return (str);
}
/*
int	main(void)
{

	int	n1, n2, n3;
	char *result1, *result2, *result3;
	char *newstring1, *newstring2, *newstring3;
	

	n1 = 1234;
	n2 = -505;
	n3 = 0;
	result1 = malloc((ft_stringlen(n1)) * sizeof(char));
	result2 = malloc((ft_stringlen(n2)) * sizeof(char));
	result3 = malloc((ft_stringlen(n3)) * sizeof(char));
	newstring1 = result1;
	newstring2 = result2;
	newstring3 = result3;

	result1 = ft_itoa(n1);
	result2 = ft_itoa(n2);
	result3 = ft_itoa(n3);

	printf("La cadena resultante es: %s.\n", result1);
	printf("La cadena resultante es: %s.\n", result2);
	printf("La cadena resultante es: %s.\n", result3);
	
	return (0);
}
*/
	
	
	
	
	
