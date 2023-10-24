/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldantas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 16:14:22 by aldantas          #+#    #+#             */
/*   Updated: 2023/10/23 16:33:42 by aldantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t items, size_t size)
{
	char	*a;
	char	*pos;

	a = malloc(items * size);
	if (!a)
		return (NULL);
	pos = a;
	while (items--)
		*a++ = 0;
	return (pos);
}
