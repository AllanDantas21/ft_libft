/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldantas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 13:23:00 by aldantas          #+#    #+#             */
/*   Updated: 2023/10/19 14:09:26 by aldantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*a;

	if (!s)
		return (0);
	a = s;
	while (n--)
		*a++ = (unsigned char) c;
	return (s);
}
/*int	main()
{	
	char a[40];
	ft_memset(a, 'b', 15);
	printf("%s\n", a);
}*/
