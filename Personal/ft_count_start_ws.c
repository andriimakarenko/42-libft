/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_start_ws.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakaren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 22:46:51 by amakaren          #+#    #+#             */
/*   Updated: 2018/11/08 22:50:04 by amakaren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/libft.h"

int	ft_count_start_ws(char *s)
{
	int i;
	int	result;

	i = -1;
	result = 0;
	while (s[++i] && ft_iswhitespace(s[i]))
		result++;
	return (result);
}
