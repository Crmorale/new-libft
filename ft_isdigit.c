/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crmorale <crmorale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 16:56:49 by crmorale          #+#    #+#             */
/*   Updated: 2024/02/14 17:12:36 by crmorale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}

/*
int	main(void)
{
	int	letter = 'a';
	int	num = 48;

	printf("Ejemplo: %d\n", ft_isdigit(letter));
	printf("Ejemplo: %d\n", ft_isdigit(num));

	return (0);
}
*/
