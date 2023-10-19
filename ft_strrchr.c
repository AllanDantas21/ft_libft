/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldantas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 14:13:14 by aldantas          #+#    #+#             */
/*   Updated: 2023/10/19 12:09:04 by aldantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strrchr(const char *str, int c)
{
	const char	*a;

	if (!str || !c)
		return (0);
	a = &str[strlen(str)];
	while (*str++)
	{
		if (*a == c)
			return ((char *)(a));
		a--;
	}
	return (NULL);
}
