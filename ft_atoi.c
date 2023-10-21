/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldantas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 12:11:10 by aldantas          #+#    #+#             */
/*   Updated: 2023/10/19 14:18:27 by aldantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
int	ft_atoi(const char *str)
{
	int	res;
	int	sign;

	res = 0;
	sign = 1;
	while ((*str == 32) || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		res *= 10; 
		res += *str++ - '0';
	}
	return ((int)(res * sign));
}
/*
int	main()
{
	printf("%d\n", ft_atoi("-42"));
	printf("%d\n", ft_atoi("aaa50"));
	printf("%d\n", ft_atoi("50"));
}*/
