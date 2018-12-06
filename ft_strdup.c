/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakaren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/03 21:16:51 by amakaren          #+#    #+#             */
/*   Updated: 2018/12/05 22:36:37 by amakaren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

size_t ft_strlen(const char *s)
{
	int i;

	if (s == NULL)
		return (0);
	i = -1;
	while (s[++i])
		;
	return ((size_t)i);
}

char	*ft_strdup(const char *s1)
{
	char	*result;
	int		i;

	if (!(result = (char*)malloc(sizeof(char) * ft_strlen(s1))))
		return(NULL);
	i = -1;
	while (s1[++i])
		result[i] = s1[i];
	return (result);
}
