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
	char	**result;
	int		parts_quantity;

	if (s == NULL || c == '\0')
		return (NULL);
	parts_quantity = ft_count_delimiters(s, c) + 1;
	result = (char**)malloc(sizeof(char*) * (parts_quantity + 1));
}
