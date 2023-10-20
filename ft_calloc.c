/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldantas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 16:14:22 by aldantas          #+#    #+#             */
/*   Updated: 2023/10/19 16:28:41 by aldantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
void	*ft_calloc(size_t n, size_t size)
{
	char	*s;
	char	*pos;

	s = malloc(n * size);
	if (!s)
		return (NULL);
	pos = s;
	while (n--)
		*s++ = '0';
	return (pos);
}
/*int	main()
{
	char *s;
	s = ft_calloc(10, sizeof(char));
	printf("%s", s);
}*/
