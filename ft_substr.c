/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldantas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 15:08:59 by aldantas          #+#    #+#             */
/*   Updated: 2023/10/19 15:50:52 by aldantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char *ns;
	char *pos;

	if(s == NULL)
		return (0);
	ns = malloc(sizeof(char) * len);
	if(!ns)
		return (0);
	pos = ((char *)s + start);
	while(len--)
	{
		*ns++ = *s++;
	}
	return(ns);
}
int	main()
{
	char *s = "abacate";
	printf("%s", ft_substr(s, 2, 3));
}
