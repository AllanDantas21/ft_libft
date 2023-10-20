/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldantas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 15:08:59 by aldantas          #+#    #+#             */
/*   Updated: 2023/10/20 12:36:44 by aldantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
char	*ft_substr(char const *s, unsigned int start, size_t n)
{
	char	*d;
	char	*ns;
	int		len;

	len = start - n;
	ns = (char *) s;
	d = malloc(sizeof(char) * len + 1);
	if (!d)
		return (NULL);
	while (len--)
	{
		*d++ = ns[start++];
	}
	d = '\0';
	return (d - len - 1);
}
/*int	main()
{
	char *s = "abacate";
	printf("%s", ft_substr(s, 2, 3));
}*/
