/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakaren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/03 21:18:29 by amakaren          #+#    #+#             */
/*   Updated: 2018/12/05 22:42:23 by amakaren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t		i;
	size_t		j;

	if (*needle == '\0')
		return ((char *)haystack);
	i = -1;
	while (haystack[++i] && i < len)
	{
		if (haystack[i] == *needle && (j = 0) == 0)
		{
			while (haystack[i + j] == needle[j] && needle[j])
				j++;
			if (needle[j] == '\0' && i + j < len)
				return ((char *)haystack + i);
		}
	}
	return (NULL);
}
