/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakaren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/03 21:23:04 by amakaren          #+#    #+#             */
/*   Updated: 2018/12/05 22:44:02 by amakaren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define SLN ft_strlen
#define SWS ft_count_start_ws
#define EWS ft_count_end_ws

#include "libft.h"
#include <stdlib.h>

char	*ft_strtrim(char const *s)
{
	char	*result;
	int		start_ws;
	int		end_ws;
	int		i;

	if (s == NULL)
		return (NULL);
	start_ws = ft_count_start_ws(s);
	end_ws = ft_count_end_ws(s);
	result = (char*)malloc(sizeof(char) * (SLN(s) - SWS(s) - EWS(s) + 1));
	if (result == NULL)
		return (NULL);
	i = start_ws - 1;
	while (++i + end_ws < (int)ft_strlen(s))
		result[i] = s[i + start_ws];
	return (result);
}
