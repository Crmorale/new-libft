/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crmorale <crmorale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 12:49:17 by crmorale          #+#    #+#             */
/*   Updated: 2024/02/14 17:12:13 by crmorale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* SYNOPSIS
	#include <string.h>
	
     char *
     strnstr(const char *haystack, const char *needle, size_t len);
	 
	 The strnstr() function locates the first occurrence of the null-termi-
     nated string needle in the string haystack, where not more than len char-
     acters are searched.  Characters that appear after a `\0' character are
     not searched.  Since the strnstr() function is a FreeBSD specific API, it
     should only be used when portability is not a concern.

	 RETURN VALUES
     If needle is an empty string, haystack is returned; if needle occurs
     nowhere in haystack, NULL is returned; otherwise a pointer to the first
     character of the first occurrence of needle is returned.
	 */

#include <stdio.h>
#include <string.h>

char *ft_strnstr(const char *haystack, const char *needle, size_t	len)
{
	size_t	i;
	size_t	j;

	i = 0;

	if (!*needle) // Si la cadena a buscar está vacía, devolvemos la cadena original
		return ((char *) haystack);

	while (i < len && haystack[i] != '\0')
	{	
		j = 0;
		while (i + j < len && haystack [i + j] == needle[j] && needle[j] != '\0')
			j++;

		if (needle[j] == '\0')
			return ((char *)haystack + i);

	i++;
	}
			
	return (NULL);		

}
/*
int	main(void)
{
	const char	*str1 = "Tírate al suelo";
	const char	*str2 = "suelo";
	const char	*str3 = "precipio";
	char	*result1 = ft_strnstr(str1, str2, strlen(str1));
	char	*result2 = ft_strnstr(str1, str2, 12);
	char	*result3 = ft_strnstr(str1, str3, strlen(str1));

	
	if (result1)
		printf("La subcadena se encuentra en %s.\n", result1);
	
	else
		printf("La subcadena no se encuentra en la cadena principal.\n");

	if (result2)
		printf("La subcadena se encuentra en %s\n", result2);
	
	else
		printf("La subcadena no se encuentra en la cadena principal.\n");
		
	if (result3)
		printf("La subcadena se encuentra en %s\n", result3);
		
	else
		printf("La subcadena no se encuentra en la cadena principal");
	
	return (0);
}
*/