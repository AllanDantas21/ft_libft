/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldantas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 20:17:08 by aldantas          #+#    #+#             */
/*   Updated: 2023/10/19 12:03:32 by aldantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>
#include <stdlib.h>*/
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char	*str1;
	char	*str2;

	str1 = (char *) s1;
	str2 = (char *) s2;
	while (n--)
	{
		if (*str1 > *str2)
			return (1);
		else if (*str1 < *str2)
			return (-1);
		str1++;
		str2++;
	}
	return (0);
}
/*
int	main()
{	
	char s1[10] = "abcde";
	char s2[10] = "abcde";
	printf("%d", ft_memcmp(s1, s2, 5));
}*/
