/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memchr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nainhaja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 17:57:46 by nainhaja          #+#    #+#             */
/*   Updated: 2019/10/22 21:55:14 by nainhaja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	const char		*ptr;
	char			x;
	size_t			cpt;
	int				test;

	ptr = (char *)str;
	test = 0;
	cpt = 0;
	x = (char)c;
	while (n > 0)
	{
		if (*ptr == x)
		{
			test = 1;
			return ((void *)(str + cpt));
		}
		ptr++;
		n--;
		cpt++;
	}
	if ((ft_strlen(str) == cpt) || test == 0)
		return (0);
	return (0);
}
