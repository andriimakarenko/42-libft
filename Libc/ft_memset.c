/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakaren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/03 21:15:08 by amakaren          #+#    #+#             */
/*   Updated: 2018/11/03 21:15:10 by amakaren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	int				i;
	unsigned char	*nulls;

	if (len == 0)
		return (b);
	nulls = (unsigned char*)b;
	i = -1;
	while (++i < len)
		nulls[i] = (unsigned char)c;
	return (b);
}
