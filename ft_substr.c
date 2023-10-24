/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldantas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 15:54:37 by aldantas          #+#    #+#             */
/*   Updated: 2023/10/23 16:48:23 by aldantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	char	*pos;
	int		lcpy;

	if (!s)
		return (NULL);
	lcpy = (int)(len);
	str = (char *)malloc((len * sizeof(char)) + 1);
	if (!str)
		return (NULL);
	pos = str;
	while (lcpy > 0)
	{
		*str++ = (char)s[start++];
		lcpy--;
	}
	*str = 0;
	return (pos);
}
