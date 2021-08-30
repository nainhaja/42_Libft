/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nainhaja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/12 19:04:29 by nainhaja          #+#    #+#             */
/*   Updated: 2019/10/23 00:46:10 by nainhaja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strdup2(const char *s1, int j, int i)
{
	char	*ptr;
	int		len;

	len = 0;
	ptr = (char *)malloc(sizeof(char) * (j - i + 2));
	if (ptr == 0)
		return (0);
	while (i <= j)
	{
		ptr[len] = s1[i];
		i++;
		len++;
	}
	ptr[len] = '\0';
	return (ptr);
}

char		*ft_strtrim(char const *s1, char const *s2)
{
	char	*ret;
	size_t	i;
	int		j;
	int		len;

	i = 0;
	j = ft_strlen((char*)s1);
	len = 0;
	while (s1[i])
	{
		if (ft_strrchr(s2, s1[i]) == 0)
			break ;
		i++;
	}
	while (j != 0)
	{
		if (ft_strrchr(s2, s1[j]) == 0)
			break ;
		j--;
	}
	if (ft_strlen((char*)s1) == i && j == 0)
		return (ft_strdup(""));
	ret = ft_strdup2(s1, j, i);
	return (ret);
}
