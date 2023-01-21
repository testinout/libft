/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkrocil <mkrocil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 11:24:57 by mkrocil           #+#    #+#             */
/*   Updated: 2023/01/20 23:36:41 by mkrocil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char *d;
	const unsigned char *s;
	
	d = dest;
	s = src;
	size_t	i;
	i = 0;
	if (!dest && !src)
	{
		return (NULL);
	}
	while(i < n)
	{
		d[i] = s[i];
		i++;
	}
	return(0);
}