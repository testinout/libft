/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkrocil <mkrocil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 10:10:10 by mkrocil           #+#    #+#             */
/*   Updated: 2023/01/14 11:15:35 by mkrocil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*p1;
	unsigned char	*p2;
	size_t	i;

	p1 = s1;
	p2 = s2;

	i = 0;
	while(i < n)
	{
		if(p1[i] != p2[i])
		{
			return(p1[i] - p2[i]);
		}
		i++;
	}
	return (0);
}