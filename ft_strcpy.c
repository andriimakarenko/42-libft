/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakaren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/03 21:17:00 by amakaren          #+#    #+#             */
/*   Updated: 2018/12/05 22:36:08 by amakaren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy(char *dst, const char *src)
{
	int i;

	i = -1;
	while (src[++i])
		dst[i] = src[i];
	dst[i] = '\0';
	return (dst);
}
