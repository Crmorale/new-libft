/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crmorale <crmorale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 18:08:09 by crmorale          #+#    #+#             */
/*   Updated: 2024/02/14 17:12:24 by crmorale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Nombre de función
ft_putendl_fd
Prototipo void ft_putendl_fd(char *s, int fd);
Archivos a entregar
-
Parámetros s: La string a enviar.
fd: El file descriptor sobre el que escribir.
Valor devuelto Nada
Funciones autorizadas
write
Descripción Envía la string ’s’ al file descriptor dado,
seguido de un salto de línea.*/

#include <unistd.h>

void	ft_putendl_fd(char *s, int fd)
{
	if (s)
	{
		while (*s)
		{
			write (fd, s, 1);
			s++;
		}
		write(fd, "\n", 1);
	}
}
/*
int	main(void)
{
	char	*str = "Jordi Pujol";
	
	ft_putendl_fd(str, 1);
	
	return (0);
}
*/
