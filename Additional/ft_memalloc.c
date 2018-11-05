/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakaren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/03 21:20:58 by amakaren          #+#    #+#             */
/*   Updated: 2018/11/05 20:47:13 by amakaren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memalloc(size_t size)
{
	void	*result;
	char	*nulls;
	int		i;

	result = malloc(size);
	nulls = (char*)result;
	i = -1;
	while (++i < size)
		nulls[i] = '0';
	return (result);
}
