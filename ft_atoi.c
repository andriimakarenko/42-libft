/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakaren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/03 21:18:53 by amakaren          #+#    #+#             */
/*   Updated: 2018/12/05 22:17:52 by amakaren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_shift_dec_rank(int base, int rank)
{
	int i;

	i = 0;
	while (++i < rank)
		base *= 10;
	return (base);
}

int		ft_atoi(const char *str)
{
	int		result;
	int		i;
	int		digit_len;
	int     sign;

	i = 0;
	sign = 1;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
		i++;
	if (str[i] == '+')
		i++;
	if (str[i] == '-' && (sign = -1) == -1)
		i++;
	if (str[i] < '0' || str[i] > '9')
		return (0);
	digit_len = 1;
	while (str[i + digit_len] >= '0' && str[i + digit_len] <= '9')
		digit_len++;
	while (digit_len > 0)
	{
		result += ft_shift_dec_rank((str[i++] - 48), digit_len);
		digit_len--;
	}
	return (result * sign);
}
