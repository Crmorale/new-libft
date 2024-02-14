/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crmorale <crmorale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 16:06:29 by crmorale          #+#    #+#             */
/*   Updated: 2024/02/14 18:22:36 by crmorale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*joined_str;
	size_t	s1_len;
	size_t	s2_len;

	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	joined_str = malloc(strlen(s1) + strlen(s2) + 1);

	if (joined_str == NULL)
		return (NULL);
	ft_strlcpy (joined_str, s1, s1_len + 1);
	ft_strlcat (joined_str, s2, s1_len + s2_len + 1);
	return (joined_str);
}

/*
int	main (void)
{
	char	*s1  = "Necesito alforjas";
	char	*s2  = " para la bicicleta";
	char	*result;

	result = ft_strjoin(s1, s2);
	
	printf("La cadena resultante es: %s\n", result);
	free(result);
	
	return (0);
}
*/