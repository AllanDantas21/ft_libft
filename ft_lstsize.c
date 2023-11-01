/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldantas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 17:48:16 by aldantas          #+#    #+#             */
/*   Updated: 2023/11/01 18:25:13 by aldantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	size_t	*tmp;
	int		count;

	if (!lst)
		return (NULL);
	tmp = lst->new;
	while (tmp != NUll)
	{
		temp = temp->next;
		count++;
	}
	return (count);
}
