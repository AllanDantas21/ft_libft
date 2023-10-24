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
#include <stdio.h>
static int	countNumbers(int n)
{	
	int	count;
	
	count = 0;
	while (n > 0)
	{
		count++;
		n = n / 10;
	}
	return (count);
}

char	*ft_itoa(int n)
{	
	int	i;
	char *a;

	a = malloc(sizeof(char) * countNumbers(n));
	if(!a)
		return (NULL);
	i = 0;
	if (n < 0)
	{
		a[i] = '-';
		i++;
		n = -n;
		ft_itoa(n);
	}
	else if (n > 9)
	{
		ft_itoa(n / 10);
		ft_itoa(n % 10);
	}
	else if (n >= 0 && n <= 9)
	{
		n += '0';
		a[i++] = n;
	}
	return (a);
}
int	main ()
{	
	char *a;
	a = ft_itoa(21);
	printf("%s", a);
}
