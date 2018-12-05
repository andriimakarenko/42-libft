/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakaren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/03 21:17:08 by amakaren          #+#    #+#             */
/*   Updated: 2018/11/03 21:17:12 by amakaren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	int i;

	if (!(src) || !(dst))
		return (NULL);
	i = 0;
	while (src[i] && i < len)
		dst[i] = src[i++];
	if (!(src[i]) &&  i < len)
		while(i < len + 1)
			dst[i++] = '\0';
}
