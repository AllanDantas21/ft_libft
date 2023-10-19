/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldantas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 11:02:34 by aldantas          #+#    #+#             */
/*   Updated: 2023/10/17 14:43:49 by aldantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <string.h>
#include <stdlib.h>
#include <stdio.h>*/

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s;
	char	*pos;

	if (!s1 || !s2)
		return (0);
	s = (char *)malloc(sizeof (char) * (strlen(s1) + strlen(s2) + 1));
	if (s == NULL)
		return (NULL);
	pos = s;
	while (*s1)
		*s++ = *s1++;
	while (*s2)
		*s++ = *s2++;
	*s = '\0';
	return (pos);
}
/*int	main()
{
	char *s1 = "abac";
	char *s2 = "ate";
	printf("%s", ft_strjoin(s1, s2));
}*/
