/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crmorale <crmorale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 21:31:23 by crmorale          #+#    #+#             */
/*   Updated: 2024/02/14 17:12:29 by crmorale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stddef.h>

void	*ft_memset(void *b, int c, size_t len)
{
	char	*str;
	size_t	i;

	str = (char *)b;
	i = 0;

	while (i < len)
	{
		str[i] = c;
		i++;
	}
	return (b);
}
/*
int	main(void)
{
	char	str []= "Hola Jacinto";
	int	letter;
	size_t len;
		
	letter = 'A';
	len = 5;
	
	printf("%s", ft_memset(str, letter, len));
	return (0);
}
*/