/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkrocil <mkrocil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 14:10:02 by mkrocil           #+#    #+#             */
/*   Updated: 2023/01/27 20:06:51 by mkrocil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char		*str;
	unsigned char		p;
	size_t				i;

	str = (unsigned char *)s;
	p = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (str[i] == p)
		{
			return (&str[i]);
		}
		i++;
	}
	return (NULL);
}
