/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nainhaja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 14:30:21 by nainhaja          #+#    #+#             */
/*   Updated: 2019/10/23 01:00:41 by nainhaja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str, const char *str2, size_t len)
{
	size_t i;

	i = 0;
	if (str[i] == '\0')
		return (((unsigned char)str[i] - (unsigned char)str2[i]));
	while (i < len && str[i] != '\0')
	{
		if (str[i] != str2[i])
			return (((unsigned char)str[i] - (unsigned char)str2[i]));
		i++;
	}
	if (str[i] == str2[i])
		return (0);
	if (i < len && str[i] == '\0')
		return (-1);
	return (0);
}
