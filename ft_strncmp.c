/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldantas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 13:54:19 by aldantas          #+#    #+#             */
/*   Updated: 2023/10/23 15:56:06 by aldantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*one;
	unsigned char	*two;

	i = 0;
	one = (unsigned char *)s1;
	two = (unsigned char *)s2;
	while ((one[i] != '\0' && i < n) || (two[i] != '\0' && i < n))
	{
		if (one[i] > two[i])
			return (1);
		else if (one[i] < two[i])
			return (-1);
		i++;
	}
	return (0);
}

/*int	main(void)
{
	printf("%d", ft_strncmp("abcded","abcdea", 6));
}*/
