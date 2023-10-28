/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldantas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 13:55:52 by aldantas          #+#    #+#             */
/*   Updated: 2023/10/27 20:27:09 by aldantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strdup(const char *s1)
{	
	char	*str1;
	char	*s2;
	char	*pos;
	
	str1 = (char *)s1;
	s2 = (char *)malloc(sizeof(char) * (ft_strlen(s1) + 1));
	if (!s2)
		return (NULL);
	pos = s2;
	while (*str1)
	{
		*s2++ = *str1++;
	}
	*s2 = 0;
	return (pos);
}
/*int	main()
{
	char *s1 = "abacate";
	printf("%s", ft_strdup(s1));
}*/
