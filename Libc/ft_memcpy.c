/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakaren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/03 21:15:32 by amakaren          #+#    #+#             */
/*   Updated: 2018/11/03 21:15:34 by amakaren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/libft.h"

void	*memcpy(void *dst, const void *src, size_t n)
{
	int			i;
	char		*d;
	const char	*s;

	d = (char*)dst;
	s = (const char*)src;
	i = -1;
	while (++i < n)
		d[i] = s[i];
	return (dst);
}
