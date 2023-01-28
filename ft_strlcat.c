/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkrocil <mkrocil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 22:12:40 by mkrocil           #+#    #+#             */
/*   Updated: 2023/01/28 09:32:23 by mkrocil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	ans;

	i = 0;
	while (!(dst == NULL && size == 0) && dst[i] && i < size)
		i++;
	j = 0;
	while (!(src == NULL && size == 0) && src[j])
		j++;
	if (size > i)
		ans = i + j;
	else
		ans = size + j;
	j = 0;
	while (size != 0 && src[j] && (i < size - 1))
		dst[i++] = src[j++];
	if (size > i)
		dst[i] = '\0';
	return (ans);
}
