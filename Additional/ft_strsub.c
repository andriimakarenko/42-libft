/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakaren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/03 21:22:37 by amakaren          #+#    #+#             */
/*   Updated: 2018/11/03 21:22:38 by amakaren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/libft.h"
#include <stdlib.h>
#include <stddef.h>

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*result;
	int		i;

	result = (char*)malloc(sizeof(char) * (len + 1));
	if (result == NULL)
		return (NULL);
	i = -1;
	while (++i < len)
		result[i] = s[start + i];
	return (result);
}
