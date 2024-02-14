/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crmorale <crmorale@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 13:40:07 by crmorale          #+#    #+#             */
/*   Updated: 2023/12/10 13:53:10 by crmorale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int	ft_tolower(int c)
{
	if (c >= 65 && c<= 90)
		return (c + 32);
	
	else 
		return c;
}

int	main(void)
{
	printf("%c\n", ft_tolower('H'));
	printf("%c\n", tolower('J'));
}