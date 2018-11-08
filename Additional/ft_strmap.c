/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakaren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/03 21:21:59 by amakaren          #+#    #+#             */
/*   Updated: 2018/11/03 21:22:00 by amakaren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strmap(char const *s, char (*f)(char))
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
		f(result[i]);
	return (result);
}
