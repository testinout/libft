/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkrocil <mkrocil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 19:57:17 by mkrocil           #+#    #+#             */
/*   Updated: 2023/02/03 21:58:40 by mkrocil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	base;
	int	i;
	int	sign;

	base = 0;
	i = 0;
	sign = 1;
	while (nptr[i] == ' ' || nptr[i] == '\n' || nptr[i] == '\t'
		|| nptr[i] == '\r' || nptr[i] == '\v' || nptr[i] == '\f')
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
		sign = 1 - 2 * (nptr[i++] == '-');
	while (nptr[i] >= 48 && nptr[i] <= 57)
	{
		if (base > INT_MAX / 10 || (base == INT_MAX / 10
				&& nptr[i] - '0' > 7))
		{
			if (sign == 1)
				return (INT_MAX);
			else
				return (INT_MIN);
		}
		base = 10 * base + (nptr[i++] - '0');
	}
	return (base * sign);
}
