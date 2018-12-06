/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakaren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/06 20:18:11 by amakaren          #+#    #+#             */
/*   Updated: 2018/12/06 20:18:17 by amakaren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list		*ft_lstnew(void const *content, size_t content_size)
{
	t_list		*list;

	if (!(list = (t_list*)malloc(sizeof(t_list) + 1)))
		return (NULL);
	list->next = NULL;
	if (!(content) || !(content_size))
	{
		list->content = NULL;
		list->content_size = 0;
		return (list);
	}
	list->content = malloc(sizeof(content));
	list->content = (void*)content;
	list->content_size = content_size;
	return (list);
}
