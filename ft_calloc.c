/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkrocil <mkrocil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 23:32:35 by mkrocil           #+#    #+#             */
/*   Updated: 2023/02/04 08:52:53 by mkrocil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned int	i;
	unsigned int	nb;
	char			*p;
	char			*q;
	char			*res;

	nb = nmemb * size;
	i = 0;
	q = malloc(nb);
	p = q;
	res = p;
	if (res != NULL)
	{
		while (i < nb)
		{
			*p++ = 0;
			i++;
		}
	}
	return (q);
}
