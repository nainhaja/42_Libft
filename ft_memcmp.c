/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nainhaja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 20:02:48 by nainhaja          #+#    #+#             */
/*   Updated: 2019/10/20 18:24:34 by nainhaja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	unsigned char	*s1;
	unsigned char	*s2;
	int				cpt;

	cpt = 0;
	s1 = (unsigned char*)str1;
	s2 = (unsigned char*)str2;
	while (n > 0)
	{
		cpt = *s1 - *s2;
		s1++;
		s2++;
		if (cpt != 0)
			return (cpt);
		n--;
	}
	return (0);
}
