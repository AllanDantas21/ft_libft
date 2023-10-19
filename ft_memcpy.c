/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldantas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 17:39:37 by aldantas          #+#    #+#             */
/*   Updated: 2023/10/19 13:48:58 by aldantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/
void	*ft_memcpy(void *dest, const void *src, size_t n )
{
	char	*d;
	char	*s;

	if (!dest)
		return (0);
	d = (char *)dest;
	s = (char *)src;
	while (n--)
		*d++ = *s++;
	return (dest);
}
/*int	main()
{
	char *s = "abacate";
	char d[20] = "BBBBBBBBBB";

	ft_memcpy(d, s, 4);
	printf("%s", d);
}*/
