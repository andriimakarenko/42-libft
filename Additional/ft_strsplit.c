/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakaren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/03 21:23:14 by amakaren          #+#    #+#             */
/*   Updated: 2018/11/03 21:23:16 by amakaren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/libft.h"
#include <stdlib.h>

char	**ft_strsplit(char const *s, char c)
{
	char	**res;
	int		parts_quantity;
	int		i;
	int		word_index;
	int		letter_index;

	if (s == NULL || c == '\0')
		return (NULL);
	parts_quantity = ft_count_delimiters(s, c) + 1;
	res = (char**)malloc(sizeof(char*) * (parts_quantity + 1));
	word_index = -1;
	i = 0;
	while (s[i])
	{
		while (s[i++] == c && (letter_index = 0) == 0)
			;
		word_index++;
		res[word_index] = (char*)malloc(sizeof(char) * ft_get_sbstrlen(s, i));
		while (s[i++] != c && s[i] != '\0')
			res[word_index][letter_index++] = s[i];
		res[word_index][letter_index] = '\0';
	}
	return (res);
}
