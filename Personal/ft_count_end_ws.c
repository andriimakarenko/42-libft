/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_end_ws.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakaren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 22:24:46 by amakaren          #+#    #+#             */
/*   Updated: 2018/11/08 22:38:30 by amakaren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/libft.h"

int	ft_count_end_ws(char *s)
{
	int len;
	int res;

	len = -1;
	while (s[++len])
		;
	result = 0;
	while (ft_iswhitespace(s[--len])
		result++;
	return (result);
}
