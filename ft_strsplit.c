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

char	*ft_get_word(char const *s, int *i, char c)
{
	char	*res;
	int		letter_index;

	if (!(res = (char*)malloc(sizeof(char) * ft_get_sbstrlen(s, *i, c) + 1)))
		return (NULL);
	while (s[*i] && s[*i] != c)
	{
		res[letter_index] = s[*i];
		letter_index++;
		*i = *i + 1;
	}
	res[letter_index] = '\0';
	return (res);
}

char	**ft_strsplit(char const *s, char c)
{
	char	**res;
	int		word_index;
	int		i;

	if (s == NULL || c == '\0' || !(res = \
		(char**)malloc(sizeof(char*) * (ft_count_substrings(s, c) + 1))))
		return (NULL);
	i = 0;
	while (s[i] && s[i] == c)
		i++;
	if (s[i] == '\0' && (res[0] = NULL) == NULL)
		return (res);
	word_index = 0;
	while (word_index < ft_count_substrings(s, c))
	{
		res[word_index] = ft_get_word(s, &i, c);
		word_index++;
		while (s[i] == c)
			i++;
	}
	return (res);
}
