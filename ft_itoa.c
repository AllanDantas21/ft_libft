/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldantas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 16:35:19 by aldantas          #+#    #+#             */
/*   Updated: 2023/10/23 21:02:03 by aldantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
static int	sizeNbr(int n)
{	
	int	count;
	
	count = 0;
	if(n < 0)
	{
		n = -n;
		count++;
	}
	while (n > 0)
	{
		count++;
		n = n / 10;
	}
	return (count);
}

char	*ft_itoa(int n)
{	
	char	*str;
	int	sign;
	int	len;

	len = sizeNbr(n);
	if (n < 0)
	{
		sign = 1;
		n = -n;
	}
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len] = '\0';
	while(len--)
	{	
		str[len] = (n % 10) + '0';
		n /= 10;
	}
	if(sign == 1)
		str[0] = '-';
	return (str);
}
