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

#include "../Includes/libft.h"
#include <stdlib.h>

int		ft_get_len(int n, int *sign, int *number)
{
	int	len;

	len = 1;
	if (n < 0)
	{
		n *= -1;
		len++;
		*sign = 1;
		*number *= -1;
	}
	while (n / 10 > 0)
	{
		len++;
		n /= 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int		neg;
	int		len;
	char	*result;

	if (n == -2147483648)
		return ("-2147483648");
	neg = 0;
	len = ft_get_len(n, &neg, &n);
	if (!(result = (char*)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	if (neg == 1)
		*result = '-';
	result[len + 1] = '\0';
	while (len > neg)
	{
		result[len - neg] = (n % 10) + 48;
		n /= 10;
		len--;
	}
	if (neg == 0)
	    *result++;
	return (result);
}
