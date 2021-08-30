/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nainhaja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/12 15:26:31 by nainhaja          #+#    #+#             */
/*   Updated: 2019/10/22 22:22:29 by nainhaja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int		k;
	int		j;
	char	*ptr;

	k = ft_strlen(str) - 1;
	j = 0;
	if (str[k + 1] == c)
	{
		ptr = (char*)(str + k + 1);
		return (ptr);
	}
	while (str[k] != c)
	{
		k--;
		if (k < 0)
			break ;
	}
	if (k < 0)
		return (0);
	if (str[k] == c)
	{
		ptr = (char*)(str + k);
		return (ptr);
	}
	return (0);
}
