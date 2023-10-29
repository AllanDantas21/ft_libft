/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldantas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 15:00:13 by aldantas          #+#    #+#             */
/*   Updated: 2023/10/26 17:26:04 by aldantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static char	*find(const char *str, int c)
{
	unsigned char	*a;

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

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	len;
	char	*s2;

	if (!s1 || !set)
		return (NULL);
	while (*s1 && find(set, *s1))
		s1++;
	len = ft_strlen(s1);
	while (*s1 && find(set, s1[len]))
		len--;
	len += 1;
	s2 = (char *)malloc(sizeof(char) * (len + 1));
	if (!s2)
		return (NULL);
	ft_strlcpy(s2, (char *)s1, len + 1);
	return (s2);
}

/*int	main()
{
	printf("%s", ft_strtrim("xxxxbatataxxxx", "x"));
}*/
