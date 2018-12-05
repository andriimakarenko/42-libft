/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakaren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/03 21:17:38 by amakaren          #+#    #+#             */
/*   Updated: 2018/12/05 22:39:46 by amakaren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t dst_init_len;
	size_t total_len;
	int i;
	int limit;

	dst_init_len = ft_strlen(dst);
	total_len = dst_init_len + ft_strlen(src);
	limit = dstsize - dst_init_len - 1;
	i = -1;
	while (src[++i] && i < limit)
		dst[dst_init_len + i] = src[i];
	return (total_len);
}
