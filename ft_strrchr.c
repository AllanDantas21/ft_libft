/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldantas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 14:13:14 by aldantas          #+#    #+#             */
/*   Updated: 2023/10/23 16:35:51 by aldantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	unsigned char	*a;

	a = (unsigned char *)&str[ft_strlen(str)];
	while (*str++)
	{
		if (*a == (unsigned char)c)
			return ((char *)(a));
		a--;
	}
	if (*a == c)
		return ((char *)(a));
	return (NULL);
}
