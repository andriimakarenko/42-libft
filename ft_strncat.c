/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakaren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/03 21:17:33 by amakaren          #+#    #+#             */
/*   Updated: 2018/12/05 22:40:59 by amakaren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t i;
	size_t j;

	if (!(s2))
		return (s1);
	i = ft_strlen(s1);
	j = -1;
	while (s2[++j] && j < n)
		s1[i + j] = s2[j];
	s1[i + j] = '\0';
	return (s1);
}
