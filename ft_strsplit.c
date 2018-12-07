/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakaren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/04 14:49:05 by amakaren          #+#    #+#             */
/*   Updated: 2018/12/05 22:43:11 by amakaren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	**ft_gen_one_entry_2d(char const *s)
{
	char	**res;

	if (!(res =	(char**)malloc(sizeof(char*)) + 1))
		return (NULL);
	if (s == NULL)
		return (res);
	if (!(res[0] = (char*)malloc(sizeof(char) * ft_strlen(s) + 1)))
		return (NULL);
	res[0] = (char*)s;
	return (res);
}

char	**ft_strsplit(char const *s, char c)
{
	char	**res;
	int		i;
	int		word_index;
	int		letter_index;

	if (ft_stronlychr(s, c))
		return (ft_gen_one_entry_2d(NULL));
	if (ft_strnotchr(s, c))
		return (ft_gen_one_entry_2d(s));
	if (s == NULL || c == '\0' || !(res = \
		(char**)malloc(sizeof(char*) * (ft_count_substrings(s, c) + 1))))
		return (NULL);
	i = -1;
	while (s[++i] == c)
		;
	word_index = -1;
	while (++word_index < ft_count_substrings(s, c) && (letter_index = 0) == 0)
	{
		if (!(res[word_index] = ft_strnew(ft_get_sbstrlen(s, i, c))))
			return (NULL);
		while (s[i] && s[i] != c)
			res[word_index][letter_index++] = s[i++];
		while (s[i] && s[i] == c)
			i++;
	}
	return (res);
}
