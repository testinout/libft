/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkrocil <mkrocil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 11:24:57 by mkrocil           #+#    #+#             */
/*   Updated: 2023/01/21 09:20:48 by mkrocil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char *d;
	const unsigned char *s;
	
	d = dest;
	s = src;

	if (!dest && !src)
	{
		return (NULL);
	}
	while(n--)
	{
		*d++ = *s++;
	}
	return(0);
}