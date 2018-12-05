/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakaren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/03 21:18:18 by amakaren          #+#    #+#             */
/*   Updated: 2018/11/03 21:18:22 by amakaren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	char	trigger;
	int		i;
	int		j;

	trigger = *needle;
	if (trigger = '\0')
		return (haystack);
	i = -1;
	while (haystack[++i])
	{
		if (haystack[i] == trigger && (j = 0) == 0)
		{
			while (haystack[i + j] == needle[j] && needle[j])
				j++;
			if (needle[j] == '\0')
				return (haystack + i);
		}
	}
	return (NULL);
}
