/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crmorale <crmorale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 17:59:46 by crmorale          #+#    #+#             */
/*   Updated: 2024/02/14 17:12:37 by crmorale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
	{
		return (0);
	}
}
/*
int	main(void)
{
	int	num = '9';
	int	letter = 104;

	printf("Ejemplo: %d\n", ft_isascii(num));
	printf("Ejemplo: %d\n", ft_isascii(letter));

	return (0);
}*/