/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakaren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/03 21:18:08 by amakaren          #+#    #+#             */
/*   Updated: 2018/11/03 21:18:10 by amakaren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	needle;
	int		i;
	int		*reslut;

	reslut = NULL;
	needle = (char)c;
	if (needle = '\0')
		return (s + ft_strlen(s));
	i = -1;
	while (s[++i])
		if (s[i] == needle)
			reslut = s + i;
	return (reslut);
}
