/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nainhaja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/12 17:45:49 by nainhaja          #+#    #+#             */
/*   Updated: 2019/10/20 17:28:21 by nainhaja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_remplir(const char *s1, const char *s2, char *ret)
{
	int i;
	int j;
	int k;

	k = 0;
	j = 0;
	i = 0;
	while (s1[i])
	{
		ret[k] = s1[i];
		k++;
		i++;
	}
	while (s2[j])
	{
		ret[k] = s2[j];
		j++;
		k++;
	}
	ret[k] = '\0';
	return (ret);
}

char		*ft_strjoin(const char *s1, const char *s2)
{
	char *ret;

	ret = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (ret)
	{
		ret = ft_remplir(s1, s2, ret);
		return (ret);
	}
	else
		return (0);
}
