/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nainhaja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 16:49:20 by nainhaja          #+#    #+#             */
/*   Updated: 2019/10/22 22:10:45 by nainhaja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	void *ptr;

	ptr = (void *)malloc(n * size);
	if (ptr == 0)
		return (0);
	ft_bzero(ptr, (n * size));
	return (ptr);
}
