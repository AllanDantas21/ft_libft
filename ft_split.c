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

static size_t	ft_countword(char const *s, char c)
{
	size_t	count;

	if (!*s)
		return (0);
	count = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
			count++;
		while (*s != c && *s)
			s++;
	}
	return (count);
}

static void	*ft_free(char **mat)
{
	int	i;

	i = 0;
	while(i > 0)
		free(mat[i--]);
	free(mat);
	return (NULL);
}

static  size_t	ft_lenword(const char *s, char c)
{
        size_t len;

        len = 0;
        if(!s)
                return (0);
        while(*s)
        {
                if (*s == c)
                        return (len);
                len++;
                s++;
        }
        return (0);
}

char *ft_search(const char *s, char c)
{	
	if (!s)
		return (NULL);
	while (*s)
	{
		if (*s == c)
			return ((char *)s);
		s++;
	}
	return (NULL);
}

char	**ft_fill(char const *s, char **mat, char c)
{
	size_t	wlen;
	int	i;

	i = 0;
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s)
		{
			if (!ft_search(s, c))
				wlen = ft_strlen(s);
			else
				wlen = ft_lenword(s, c);
			mat[i++] = ft_substr(s, 0, wlen);
			if (!mat)
				{
					ft_free(mat);
					return (NULL);
				}
			s += wlen;
		}
	}
	mat[i] = NULL;
	return (mat);
}

char	**ft_split(char const *s, char c)
{
	char	**mat;

	mat = (char **)malloc((ft_countword(s, c) + 1) * sizeof(char *));
	if (!mat)
		return (0);
	mat = ft_fill(s, mat, c);
	return (mat);
}

/*int	main()
{
	char *a = " pao de batata";
	char **m;

	m = ft_split(a, ' ');
	printf("%s\n", m[0]);
	printf("%s\n", m[1]);
	printf("%s\n", m[2]);
	//printf("%s\n", m[3]);
	//printf("%s\n", m[3]);
	//rintf("%s\n", m[4]);
}*/
