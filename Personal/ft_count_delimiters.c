/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_delimiters.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakaren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 16:58:12 by amakaren          #+#    #+#             */
/*   Updated: 2018/11/09 17:01:27 by amakaren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/libft.h"

int	ft_count_delimiters(char *s, char c)
{
	int i;
	int result;

	result = 0;
	i = 0;
	while (str[i++])
		if (str[i] != c)
			break;
	while (str[i++])
		if (str[i] == c && str[i + 1] && str[i + 1] != c)
			result++;
	return (result);
}
