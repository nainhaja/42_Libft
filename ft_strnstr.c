/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strnstr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nainhaja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 17:29:31 by nainhaja          #+#    #+#             */
/*   Updated: 2019/10/22 22:24:14 by nainhaja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_strcmp2(const char *str, const char *to_find)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (str[i] && to_find[j])
	{
		if (str[i] != to_find[j])
			return (0);
		i++;
		j++;
	}
	if (to_find[j] == '\0')
		return (1);
	else
		return (0);
}

char		*ft_strnstr(const char *str, const char *to_find, size_t n)
{
	int j;
	int i;

	i = 0;
	j = 0;
	if (str == 0 && n == 0)
		return (0);
	if (to_find[j] == '\0')
		return ((char*)str);
	while (str[i])
	{
		if ((to_find[j] == str[i]) && (ft_strcmp2(str + i, to_find) == 1))
		{
			if ((i + ft_strlen(to_find) <= n))
				return ((char*)(str + i));
		}
		i++;
	}
	return (0);
}
