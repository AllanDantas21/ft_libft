/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldantas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 16:22:58 by aldantas          #+#    #+#             */
/*   Updated: 2023/10/26 17:25:07 by aldantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>

static size_t	ft_countwords(char *s, char ch)
{	
	size_t	words;
	unsigned int	i;

	i = 0;
	words = 0;
	while (*s)
	{
		if ((s[i] == ch) && (s[i + 1] != ch))
			words++;
		s++;
	}
	return (words);
}

char **ft_split(char const *s, char c);

int	main()
{
	char *a = "pao de batata";
	printf("%ld", ft_countwords(a, ' '));
}
