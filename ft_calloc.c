/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldantas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 16:14:22 by aldantas          #+#    #+#             */
/*   Updated: 2023/10/25 18:34:02 by aldantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t items, size_t size)
{
	char	*a;
	char	*pos;
	size_t	tot;

	tot = items * size;
	a = malloc(tot);
	if (!a)
		return (NULL);
	pos = a;
	while (tot--)
		*a++ = 0;
	return (pos);;
}
