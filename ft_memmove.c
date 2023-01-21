/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkrocil <mkrocil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 21:46:21 by mkrocil           #+#    #+#             */
/*   Updated: 2023/01/21 10:28:35 by mkrocil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void *ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char *dst;
	const unsigned char *sc;

	dst = dest;
	sc = src;

	if (dst > sc && dst < sc + n) 
	{
		dst += n;
		sc += n;
		while (n--) 
		{
			*--dst = *--sc;
		}
	} 
	else {
		while (n--) 
		{
			*dst++ = *sc++;
		}
	}
	return dest;
}