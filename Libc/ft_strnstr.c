/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakaren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/03 21:18:29 by amakaren          #+#    #+#             */
/*   Updated: 2018/11/03 21:18:30 by amakaren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/libft.h"

char	*strnstr(const char *haystack, const char *needle, size_t len)
{
	int		i;
	int		j;

	if (*needle == '\0')
		return (haystack);
	i = -1;
	while (haystack[++i] && i < len)
	{
		if (haystack[i] == *needle && (j = 0) == 0)
		{
			while (haystack[i + j] == needle[j] && needle[j])
				j++;
			if (needle[j] == '\0')
				return (haystack + i);
		}
	}
	return (NULL);
}
