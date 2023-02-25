/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkrocil <mkrocil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 20:25:39 by mkrocil           #+#    #+#             */
/*   Updated: 2023/02/25 16:01:20 by mkrocil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	unsigned char	i;
	unsigned char	j;
	char			*tstring;

	i = 0;
	j = 0;
	while(s1[i])
	{
		while(s1[i] != set[j])
		{
			j++;
			if(s1[i] == set[j])
			{
				i++;
			}
		}
		i++;
	}
}
