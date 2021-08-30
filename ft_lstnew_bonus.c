/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nainhaja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/19 17:34:54 by nainhaja          #+#    #+#             */
/*   Updated: 2019/10/20 02:51:20 by nainhaja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list *n;

	n = (t_list *)malloc(sizeof(t_list));
	if (n == 0)
		return (0);
	n->content = content;
	n->next = NULL;
	return (n);
}
