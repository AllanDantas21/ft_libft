/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldantas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 15:49:12 by aldantas          #+#    #+#             */
/*   Updated: 2023/10/25 16:36:13 by aldantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{	
	int	i;
	int	c;

	i = 0;
	c = 0;
	if (little[i] == '\0')
		return ((char *)big);
	if (len == 0)
		return (NULL); 
	while ((big[i] != '\0' && little[c] != '\0') && len--)
	{
		if (big[i] == little[c])
			c++;
		else
			c = 0;
		i++;
	}
	if (little[c] == '\0')
		return ((char *)(&big[i - c]));
	return (NULL);
}
/*int	main(void)
{
	char string[] = "F_BD_CE_BD_EF_BF_BE_EF_BF_BD_EF__DD_EF_BF_BD";
	char find[] = "_EF_BF_BE_E";

	printf("%s", ft_strstr(string, find));
}*/
