/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkrocil <mkrocil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 12:08:07 by mkrocil           #+#    #+#             */
/*   Updated: 2023/02/03 22:20:50 by mkrocil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	l;

	i = 0;
	if (!*little)
		return ((char *)big);
	if (len == 0)
		return (NULL);
	while (big[i] && i < len && len > 0)
	{
		l = 0;
		while (little[l] && (little[l] == big[i + l] && i + l < len))
		{
			l++;
		}
		if (little[l] == 0)
		{
			return (&((char *)big)[i]);
		}
		i++;
	}
	return (NULL);
}
