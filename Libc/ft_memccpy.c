/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakaren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/03 21:15:42 by amakaren          #+#    #+#             */
/*   Updated: 2018/11/03 21:15:44 by amakaren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/libft.h"

void	*memcpy(void *dst, const void *src, int c, size_t n)
{
	int				i;
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
