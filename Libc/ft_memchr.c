/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakaren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/03 21:16:15 by amakaren          #+#    #+#             */
/*   Updated: 2018/11/03 21:16:18 by amakaren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	int				i;
	unsigned char	wanted;

	wanted = (unsigned char)c;
	i = -1;
	while (++i < n)
		if (((char*)s)[i] == wanted)
		 	return (((char*)s)[i]);
	return (NULL);
}
