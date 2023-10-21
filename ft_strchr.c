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
	unsigned char *a;
	
	a = (unsigned char *) str;
	while (*a)
	{
		if (*a == (unsigned char)c)
			return ((char *)(a));
		a++;
	}
	if (*a == c)
		return ((char *)(a));
	return (NULL);
}
/*int	main ()
{
	char *c = "abaca";
	printf("%s", ft_strchr(c, 'z'));
}*/
