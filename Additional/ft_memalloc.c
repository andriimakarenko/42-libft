/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakaren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/03 21:20:58 by amakaren          #+#    #+#             */
/*   Updated: 2018/11/05 20:47:13 by amakaren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/libft.h"
#include <stdlib.h>

void	*ft_memalloc(size_t size)
{
	void	*result;

	result = malloc(size);
	if (result == NULL)
		return (NULL);
	memset(result, 0, size);
	return (result);
}
