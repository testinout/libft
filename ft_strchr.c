/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkrocil <mkrocil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 21:38:36 by mkrocil           #+#    #+#             */
/*   Updated: 2023/01/28 09:33:35 by mkrocil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	const char		*str;
	unsigned char	p;
	int				i;

	str = s;
	p = (unsigned char)c;
	i = 0;
	if (str == NULL)
	{
		return (NULL);
	}
	while (str[i])
	{
		if (str[i] == p)
			return ((char *)&str[i]);
		i++;
	}
	if (str[i] == p)
		return ((char *)&str[i]);
	return (NULL);
}
