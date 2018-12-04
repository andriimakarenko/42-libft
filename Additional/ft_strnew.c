/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakaren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/03 21:21:18 by amakaren          #+#    #+#             */
/*   Updated: 2018/11/03 21:21:20 by amakaren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/libft.h"
#include <stdlib.h>

char *ft_strnew(size_t size)
{
	int		i;
	char	*fresh;

	fresh = (char*)malloc(size);
	if (fresh == NULL)
		return NULL;
	i = -1;
	while (++i < size)
		fresh[i] = '0';
	fresh[size] = '\0';
	return (fresh);
}
