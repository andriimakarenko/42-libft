/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakaren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/03 21:22:05 by amakaren          #+#    #+#             */
/*   Updated: 2018/11/03 21:22:07 by amakaren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/libft.h"
#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	int		len;
	char	*result;

	if (s == NULL || f == NULL)
		return (NULL);
	i = -1;
	len = 0;
	while (s[++i])
		len++;
	result = (char*)malloc(sizeof(char) * (len + 1));
	result[len + 1] = '\n';
	i = -1;
	while (result[++i])
		f(i, result[i]);
	return (result);
}
