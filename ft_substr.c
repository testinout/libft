/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkrocil <mkrocil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 09:24:16 by mkrocil           #+#    #+#             */
/*   Updated: 2023/02/04 09:47:32 by mkrocil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	unsigned int	j;
	char			*substr;

	i = 0;
	j = 0;
	substr = malloc(sizeof(char) * len);
	while(s[i])
	{
		while(i == start && len >= j)
		{
			substr[j] = s[i + j];
			j++;
		}
		i++;
	}
	return (substr);
}
