/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_sbstrlen.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakaren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 21:59:59 by amakaren          #+#    #+#             */
/*   Updated: 2018/11/12 22:04:25 by amakaren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_get_sbstrlen(const char *s, int start, char delimiter)
{
	int len;

	len = 0;
	while (s[start] && s[start] != delimiter)
	{
		len++;
		start++;
	}
	return (len);
}
