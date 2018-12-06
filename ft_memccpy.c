/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakaren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/03 21:15:42 by amakaren          #+#    #+#             */
/*   Updated: 2018/12/05 22:25:54 by amakaren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	char			*d;
	const char		*s;
	unsigned char	stop;

	d = (char*)dst;
	s = (const char*)src;
	stop = (unsigned char)c;
	i = -1;
	while (++i < n)
	{
		d[i] = s[i];
		if (d[i] == stop)
			break;
	}
	return (dst);
}
