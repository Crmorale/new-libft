/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crmorale <crmorale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 13:53:16 by crmorale          #+#    #+#             */
/*   Updated: 2024/02/14 17:12:38 by crmorale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
	{
		return (0);
	}
}

/*int	main(void)
{
	int	num = '9';
	int	letter = 104;

	printf("Ejemplo: %d\n", ft_isalpha(num));
	printf("Ejemplo: %d\n", ft_isalpha(letter));

	return (0);
} */