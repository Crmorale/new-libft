/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crmorale <crmorale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 12:55:53 by crmorale          #+#    #+#             */
/*   Updated: 2024/02/14 17:12:42 by crmorale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	n;

	i = 0;
	sign = 1;
	n = 0;

	while (str[i] == '\t' || str[i] == '\n' || str[i] == '\v' || str[i] == '\f'
			|| str[i] == '\r'|| str[i] == ' ') 
		i++;

	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str [i] <= '9')
	{
		n = ((n * 10) + (str[i] - '0'));
		i++;
	}
	return (n * sign);
}
/*
int	main(void)
{

char	*s = " 1324loko";
char 	*s2 = "   983 a";
char	*s3 = "#";
char	*s4 = "-34";

printf("%d\n %d\n", ft_atoi(s), atoi(s));
printf("%d\n %d\n", ft_atoi(s2), atoi(s2));
printf("%d\n %d", ft_atoi(s3), atoi(s3));
printf("%d\n %d", ft_atoi(s4), atoi(s4));
}
*/
