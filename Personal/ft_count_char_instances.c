/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_char_instances.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakaren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 16:14:28 by amakaren          #+#    #+#             */
/*   Updated: 2018/11/09 16:19:55 by amakaren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/libft.h"

int	ft_count_char_instances(char *s, char c)
{
	int i;
	int result;

	result = 0;
	i = -1;
	while (str[++i])
		if(str[i] == c)
			result++;
	return (result);
}
