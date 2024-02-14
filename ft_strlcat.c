/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crmorale <crmorale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 16:06:29 by crmorale          #+#    #+#             */
/*   Updated: 2024/02/14 17:12:18 by crmorale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;

	dst_len = strlen (dst);
	src_len = strlen (src);
	i = 0;

	if (dstsize <= dst_len)
		return (dstsize + src_len);
		
	while ((src[i]) && dst_len + i + 1 < dstsize)
		{
			dst[dst_len + i] = src[i];
			i++;
		}
		
	if (dst_len + i < dstsize)
			dst[dst_len + i] = '\0';
	
	return (dst_len + src_len);
	
}
/*
int	main (void)
{
	char	dst1 [50] = "Hola";
	char	src [] = "Mundo";
	char	dst2[50] = "";
	char	dst3[50] = "";
	char	dst4[50] = "";
	char	dst5[50] = "";
	char	dst6[50] = "Hola";
	char	dst7[50] = "";
	char	dst8[50] = "";
	char	dst9[50] = "";
	
	size_t result1 = ft_strlcat(dst1, src, sizeof(dst1));
	printf("El resultado de ft_strlcat = %zu\n", result1);
	printf("Cadena resultante = %s\n", dst1);

	size_t result2 = ft_strlcat(dst2, src, 5);
	printf("\n El resultado de ft_strlcat = %zu\n", result2);
	printf("Cadena resultante = %s\n", dst2);
	
	size_t result3 = ft_strlcat (dst3, "", sizeof(dst3));
	printf("El resultado de ft_strlcat = %zu\n", result3);
	printf("Cadena resultante = %s\n", dst3);
	
	size_t result4 = ft_strlcat (dst4, src, sizeof(dst4));
	printf("El resultado de ft_strlcat = %zu\n", result4);
	printf("Cadena resultante = %s\n", dst4);

    // Caso de prueba adicional 2: dst es vacío y src no lo es
    size_t result5 = ft_strlcat(dst5, src, sizeof(dst5));
    printf("El resultado de ft_strlcat = %zu\n", result5);
    printf("Cadena resultante = %s\n", dst5);

    // Caso de prueba adicional 3: src es vacío y dst no lo es
    size_t result6 = ft_strlcat(dst6, "", sizeof(dst6));
    printf("El resultado de ft_strlcat = %zu\n", result6);
    printf("Cadena resultante = %s\n", dst6);

    // Caso de prueba adicional 4: dstsize es exactamente igual a la longitud de dst más uno
    size_t result7 = ft_strlcat(dst7, src, strlen(dst7) + 1);
    printf("El resultado de ft_strlcat = %zu\n", result7);
    printf("Cadena resultante = %s\n", dst7);

    // Caso de prueba adicional 5: dstsize es menor que la longitud de dst
    size_t result8 = ft_strlcat(dst8, src, strlen(dst8));
    printf("El resultado de ft_strlcat = %zu\n", result8);
    printf("Cadena resultante = %s\n", dst8);

    // Caso de prueba adicional 6: dstsize es mucho mayor que las longitudes de dst y src
    size_t result9 = ft_strlcat(dst9, src, 100);
    printf("El resultado de ft_strlcat = %zu\n", result9);
    printf("Cadena resultante = %s\n", dst9);
	
	return (0);
}
*/