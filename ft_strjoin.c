/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkrocil <mkrocil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 23:17:55 by mkrocil           #+#    #+#             */
/*   Updated: 2023/02/25 13:46:33 by mkrocil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	unsigned int	i;
	unsigned int	j;
	char			*nstring;

	i = 0;
	j = 0;
	nstring = malloc((ft_strlen(s1) + ft_strlen(s2) + 1));
	while (s1[i])
	{
		nstring[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		nstring[i] = s2[j];
		i++;
		j++;
	}
	nstring[i] = '\0';
	return (nstring);
}
