/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldantas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 13:59:20 by aldantas          #+#    #+#             */
/*   Updated: 2023/10/19 12:07:12 by aldantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
char	*ft_strchr(const char *str, int c)
{
	while (*str)
	{
		if (*str == (char)c)
			return ((char *)(str));
		str++;
	}
	return (NULL);
}
/*int	main ()
{
	char *c = "abaca";
	printf("%s", ft_strchr(c, 'z'));
}*/
