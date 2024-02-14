/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crmorale <crmorale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 13:57:37 by crmorale          #+#    #+#             */
/*   Updated: 2024/02/14 17:12:41 by crmorale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	ft_bzero(void *s, size_t n)
{
	char	*str;
	size_t	i;

	str = (char *)s;
	i = 0;
	
	while (i < n)
		{
			str[i] = 0;
			i++;
		}
}
/*
int main(void)
{
	char str1 []= "Habemus pescadus";
	int len = 5;
	char str2[sizeof(str1)];
	
	strcpy(str2, str1);	

	printf("Antes de ft_bzero: %s", str2);
	
	ft_bzero(str2, len);
	printf("%s", str2);

	return (0);
}
*/