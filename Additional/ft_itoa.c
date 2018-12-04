/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakaren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/03 21:23:24 by amakaren          #+#    #+#             */
/*   Updated: 2018/11/03 21:23:26 by amakaren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_get_rank(int n)
{
	int	rank;

	rank = 1;
	while (n / 10 > 0)
	{
		rank++;
		n /= 10;
	}
	return (rank);
}

int		ft_power(int number, int power)
{
	int	i;
	int result;

	i = 1;
	result = number;
	while (++i <= power)
		result *= number;
	return (result);
}

char	*ft_itoa(int n)
{
	int		rank;
	char	*result;
	int		i;
	char	current_digit;

	rank = ft_get_rank(n);
	if (!(result = (char*)malloc(sizeof(char) * (rank + 1))))
		return (NULL);
	i = 0;
	if (n < 0)
		result[i++] = '-';
	while (ft_get_rank(n) > 0)
	{
		current_digit = (n / ft_power(10, ft_get_rank(n)) + 48);
		result[i++] = current_digit;
		n -= (current_digit - 48) * ft_get_rank(n);
	}
	return (result);
}
