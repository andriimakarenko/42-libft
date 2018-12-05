/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakaren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/03 21:17:56 by amakaren          #+#    #+#             */
/*   Updated: 2018/11/03 21:17:59 by amakaren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	needle;
	int		i;

	needle = (char)c;
	if (needle = '\0')
		return (s + ft_strlen(s));
	i = -1;
	while (s[++i])
		if (s[i] == needle)
			return (s + i);
	return (NULL);
}
