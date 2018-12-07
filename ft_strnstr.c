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

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t		i;
	size_t		j;

	if (*s2 == '\0')
		return ((char *)s1);
	i = -1;
	while (s1[++i] && i < len)
	{
		if (s1[i] == *s2 && (j = 0) == 0)
		{
			while (s1[i + j] == s2[j] && s2[j])
				j++;
			if (s2[j] == '\0' && i + j < len)
				return ((char *)s1 + i);
		}
	}
	return (NULL);
}
