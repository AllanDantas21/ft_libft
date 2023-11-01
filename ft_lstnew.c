/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldantas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 21:05:57 by aldantas          #+#    #+#             */
/*   Updated: 2023/10/31 21:27:12 by aldantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*lst_arr;

	lst_arr = (t_list *)malloc(sizeof(t_list) * 1);
	if (!lst_arr)
		return (NULL);
	lst_arr->content = content;
	lst_arr->next = NULL;
	return (lst_arr);
}
