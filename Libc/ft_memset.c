/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakaren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/03 21:15:08 by amakaren          #+#    #+#             */
/*   Updated: 2018/11/03 21:15:10 by amakaren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_memset(void *b, int c, size_t len)
{
	int		i;
	char	*nulls;

	nulls = (char*)b;
	i = -1;
	while (++i < len)
		nulls[i] = (unsigned char)c;
	return (b);
}
