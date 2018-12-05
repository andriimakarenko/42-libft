/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakaren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/03 21:17:22 by amakaren          #+#    #+#             */
/*   Updated: 2018/11/03 21:17:23 by amakaren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	int i;
	int j;

	if (!(s1))
		return (NULL);
	if (!(s2))
		return (s1);
	i = ft_strlen(s1);
	j = -1;
	while (s2[++j])
		s1[i+j] = s2[j];
	s1[i+j] = '\0';
	return (s1);
}
