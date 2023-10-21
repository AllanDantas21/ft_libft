/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldantas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 15:56:50 by aldantas          #+#    #+#             */
/*   Updated: 2023/10/17 17:26:11 by aldantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
void	*ft_bzero(void *s, size_t n)
{
	 char	*a;

	if (!s)
		return (0);
	a = s;
	while (n--)
		*a++ = 0;
	return (s);
}
/*int	main()
{
	char a[10] = "aaaaaaaaaa";
	ft_bzero(a, 5);
	printf("%s", a);
}*/
