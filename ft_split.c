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
	if (s[i] && in_word == 0)
		words--;
	return (words);
}

char **ft_split(char const *s, char c)
{
	char 	**m;
	size_t	wlen;
	int	in_word;
	int	i;
	
	if (!s)
		return (NULL);
	in_word = 0;
	i = 0;
	wlen = 0;
	m = (char **)malloc((ft_countwords((char *)s, c) + 1) * sizeof(char *));
	if (!m)
		return (NULL);
	while(*s)
	{
		if (*s != c)
		{
			wlen++;
			in_word = 1;
		}
		else if ((*s == c) && ((*s - 1) != c) && in_word == 1)
		{
			m[i] = ft_substr(s - wlen, 0, wlen);	
			in_word = 0;
			wlen = 0;
			i++;
		}
		s++;
	}
	if (s[ft_strlen(s) - 1] && in_word == 1)
		m[i] = ft_substr(s - wlen, 0, wlen);
	return (m);
}

int	main()
{
	char *a = "pao de batata ";
	char **m;

	m = ft_split(a, ' ');
	printf("%s\n", m[0]);
	printf("%s\n", m[1]);
	printf("%s\n", m[2]);

}
