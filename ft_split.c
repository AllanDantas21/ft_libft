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
	unsigned int	in_word;

	i = 1;
	words = 0;
	while (s[i])
	{
		if (s[i] != ch)
			in_word = 1;
		if ((s[i] == ch) && (s[i - 1] != ch) && in_word == 1)
		{
			words++;
			in_word = 0;
		}
		i++;
	}
	if (s[i - 1] && in_word == 0)
		words--;
	return (words);
}

char **ft_split(char const *s, char c);

int	main()
{
	char *a = " pao de  batata";
	printf("%ld", ft_countwords(a, ' '));
}
