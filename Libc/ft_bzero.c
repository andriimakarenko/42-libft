/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakaren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/03 21:15:21 by amakaren          #+#    #+#             */
/*   Updated: 2018/11/03 21:15:22 by amakaren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/libft.h"

void	ft_bzero(void *s, size_t n)
{
	int i;

	if (n < 1)
		return ();
	i = -1;
	while (s[++i] && i < n)
	((char*)s)[i] = 0;
}
