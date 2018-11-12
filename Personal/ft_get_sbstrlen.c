/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_sbstrlen.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakaren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 21:59:59 by amakaren          #+#    #+#             */
/*   Updated: 2018/11/12 22:09:15 by amakaren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/libft.h"

int	ft_get_sbstrlen(const char *s, int start, char delimiter)
{
	int len;

	len = 1;
	while (s[start] && s[start] != delimiter)
	{
		len++;
		start++;
	}
	return (len);
}
