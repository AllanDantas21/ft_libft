/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldantas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 15:00:13 by aldantas          #+#    #+#             */
/*   Updated: 2023/10/20 16:20:14 by aldantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	len;
	char	*s2;
	char	*pos;

	while (*s1 && ft_strchr(set, *s1))
		*s1++;
	len = ft_strlen(s1);
	while (*s1 && ft_strchr(set, s1[len--]));
	len += 2;
	s2 = (char *)malloc(sizeof(char) * (len + 1));
	if (!s2)
		return (NULL);
	pos = s2;
	while (len--)
		*s2++ = *s1++;
	*s2 = '\0';
	return (pos);
}
/*int	main()
{
	printf("%s", ft_strtrim("xx batata   ", "x "));
}*/
