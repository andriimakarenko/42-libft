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

static int	ft_shift_dec_rank(int base, int rank)
{
	int i;

	i = 0;
	while (++i < rank)
		base *= 10;
	return (base);
}

static int	ft_skip_to_number(char const *str, int i, int *sign, int *valid)
{
	int		minus_acceptable;

	minus_acceptable = 1;
	while (str[i] == ' ' || str[i] == '\n' || \
	str[i] == '\t' || str[i] == '\r' || \
	str[i] == '\v' || str[i] == '\f')
		i++;
	if (str[i] == '+')
	{
		i++;
		minus_acceptable = 0;
	}
	if (str[i] == '-' && minus_acceptable)
	{
		*sign = -1;
		i++;
	}
	if (str[i] == '-' && !(minus_acceptable))
		*valid = 0;
	return (i);
}

int			ft_atoi(const char *str)
{
	int		result;
	int		i;
	int		digit_len;
	int		sign;
	int		valid;

	i = 0;
	sign = 1;
	result = 0;
	valid = 1;
	i = ft_skip_to_number(str, i, &sign, &valid);
	if (str[i] < '0' || str[i] > '9' || !(valid))
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
