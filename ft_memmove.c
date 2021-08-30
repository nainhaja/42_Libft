/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nainhaja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 22:43:40 by nainhaja          #+#    #+#             */
/*   Updated: 2019/10/22 00:45:57 by nainhaja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *str, const void *str2, size_t n)
{
	char		*ptr;
	const char	*ptr2;

	ptr = (char *)str;
	ptr2 = (char *)str2;
	if (ptr == 0 && ptr2 == 0)
		return (0);
	if (str2 < str)
	{
		while (n > 0)
		{
			ptr[n - 1] = ptr2[n - 1];
			n--;
		}
	}
	else
	{
		while (n-- > 0)
		{
			*ptr = *ptr2;
			ptr++;
			ptr2++;
		}
	}
	return (str);
}
