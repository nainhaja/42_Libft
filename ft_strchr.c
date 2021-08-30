/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nainhaja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 18:53:29 by nainhaja          #+#    #+#             */
/*   Updated: 2019/10/22 22:01:06 by nainhaja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	size_t	i;
	int		j;
	char	*ptr;

	i = 0;
	j = 0;
	while (str[i] != c && str[i] != '\0')
		i++;
	if (c == '\0' && str[i] == c)
		return ((char*)(str + i));
	if (i == ft_strlen(str))
		return (0);
	ptr = (char*)(str + i);
	return (ptr);
}
