/************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldantas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 16:22:58 by aldantas          #+#    #+#             */
/*   Updated: 2023/10/27 19:36:36 by aldantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>

static size_t	ft_countwords(const char *s, char ch)
{	
	size_t		words;
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

void	*ft_free(char **mat)
{
	while (*mat)
		free(*mat);
	free(mat);
	return (NULL);
}

char	**ft_fillsplit(const char *s, char **mat, char c, int index)
{
	int	in_word;
	size_t	wlen;

	wlen = 0;
	in_word = 0;
        while(*s)
        {
	       	if (*s != c)
                {
                        wlen++;
                        in_word = 1;
                }
                else if ((*s == c) && ((*s - 1) != c) && in_word == 1)
                {
                        mat[index++] = ft_substr(s - wlen, 0, wlen);
			if (!mat)
				ft_free(mat);
                        in_word = 0;
                        wlen = 0;
                }
                s++;
        }
        if (s[ft_strlen(s) - 1] && in_word == 1)
                mat[index] = ft_substr(s - wlen, 0, wlen);
	return (mat);
}

char **ft_split(char const *s, char c)
{
	char 	**matrix;
	int	index;
	
	index = 0;
	if(s == NULL)
		return (NULL);
	matrix = (char **)ft_calloc((ft_countwords(s, c) + 1) , sizeof(char *));
	if (!matrix)
		return (NULL);
	matrix = ft_fillsplit(s, matrix, c, index);
	return (matrix);
}

/*int	main()
{
	char *a = "pao de batata";
	char **m;

	m = ft_split(a, ' ');
	printf("%s\n", m[0]);
	printf("%s\n", m[1]);
	printf("%s\n", m[2]);
}*/
