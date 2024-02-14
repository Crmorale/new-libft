/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crmorale <crmorale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 18:08:09 by crmorale          #+#    #+#             */
/*   Updated: 2024/02/14 17:12:28 by crmorale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Nombre de función
ft_putchar_fd
Prototipo void ft_putchar_fd(char c, int fd);
Archivos a entregar
-
Parámetros c: El carácter a enviar.
fd: El file descriptor sobre el que escribir.
Valor devuelto Nada
Funciones autorizadas
write
Descripción Envía el carácter ’c’ al file descriptor
especificado.*/

#include <unistd.h>

void	ft_putchar_fd(char c, int fd)
{
	write (fd, &c, 1);
}

/*int	main(void)
{
	ft_putchar_fd('H', 1);
	ft_putchar_fd('o', 1);
	ft_putchar_fd('l', 1);
	ft_putchar_fd('a', 1);
	ft_putchar_fd('\n', 1);
	return (0);
}*/
