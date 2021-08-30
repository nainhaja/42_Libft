/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nainhaja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/12 00:13:24 by nainhaja          #+#    #+#             */
/*   Updated: 2019/10/22 22:08:05 by nainhaja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t nb)
{
	size_t i;
	size_t len;

	i = 0;
	len = ft_strlen(src);
	while (*dest && nb)
	{
		dest++;
		i++;
		nb--;
	}
	while (*src && nb > 1)
	{
		*dest = *src;
		src++;
		dest++;
		nb--;
	}
	if (nb != 0)
		*dest = '\0';
	return (len + i);
}
