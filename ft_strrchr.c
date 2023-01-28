/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkrocil <mkrocil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 11:12:53 by mkrocil           #+#    #+#             */
/*   Updated: 2023/01/28 12:06:40 by mkrocil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char		*str;
	char			p;
	int				i;
	char			*hold;

	str = s;
	p = (char)c;
	i = 0;
	hold = NULL;
	if (!str)
		return (NULL);
	while (str[i])
	{
		if (str[i] == p)
			hold = (char *)&str[i];
		i++;
	}
	if (str[i] == p)
		hold = (char *)&str[i];
	return (hold);
}
