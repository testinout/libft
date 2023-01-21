/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkrocil <mkrocil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 08:40:29 by mkrocil           #+#    #+#             */
/*   Updated: 2023/01/14 08:54:20 by mkrocil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int	c)
{
	return (c >= 33 && c <= 126);
}