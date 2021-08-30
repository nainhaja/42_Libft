/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nainhaja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 19:55:42 by nainhaja          #+#    #+#             */
/*   Updated: 2019/10/20 18:23:23 by nainhaja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *str, const void *str2, int c, size_t n)
{
	char		*ptr;
	const char	*ptr2;
	int			cpt;
	int			test;

	cpt = 0;
	test = 0;
	ptr = (char *)str;
	ptr2 = (char *)str2;
	while (n > 0)
	{
		if (*ptr2 == (char)c)
		{
			*ptr = (char)c;
			test = 1;
			return (str + cpt + 1);
		}
		*ptr = *ptr2;
		ptr++;
		ptr2++;
		n--;
		cpt++;
	}
	return (0);
}
