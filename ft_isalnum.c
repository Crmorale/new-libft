/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crmorale <crmorale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 17:42:26 by crmorale          #+#    #+#             */
/*   Updated: 2024/02/14 17:12:40 by crmorale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int	ft_isalnum(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122) || (c >= 48 && c <= 57))
		return (1);
	else
	{
		return (0);
	}
}

/*int	main(void)
{
	int	letter = '9';
	int	num = 104;
	int esp = 35;

	printf("Ejemplo: %d\n", ft_isalnum(letter));
	printf("Ejemplo: %d\n", ft_isalnum(num));
	printf("Ejemplo: %d\n", ft_isalnum(esp));

	return (0);
}*/