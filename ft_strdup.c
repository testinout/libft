/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkrocil <mkrocil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 22:33:23 by mkrocil           #+#    #+#             */
/*   Updated: 2023/02/03 23:18:43 by mkrocil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int			s_size;
	static char	*dup;
	char		*dup_offset;

	s_size = ft_strlen(s);
	dup = (char *)malloc(sizeof(char) * s_size + 1);
	if (dup == NULL)
		return ((char *) NULL);
	dup_offset = dup;
	while (*s)
	{
		*dup_offset = *s;
		dup_offset++;
		s++;
	}
	*dup_offset = '\0';
	return (dup);
}
