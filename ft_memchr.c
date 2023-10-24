/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldantas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 17:28:05 by aldantas          #+#    #+#             */
/*   Updated: 2023/10/19 13:50:39 by aldantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned char	*a;

	a = (unsigned char *)str;
	while (n-- > 0)
	{
		if (*a == (unsigned char) c)
			return ((char *)(a));
		a++;
	}
	return (NULL);
}
/*int	main()
{	
	char *p;
	char ch[20] = "abacatee";
	p = ft_memchr(ch, 'c', 8);
	printf("%s", p);
}*/
