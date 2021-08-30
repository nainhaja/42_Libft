/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nainhaja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 22:03:46 by nainhaja          #+#    #+#             */
/*   Updated: 2019/10/22 22:43:39 by nainhaja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr2_fd(unsigned int a, int fd)
{
	if (a <= 9)
		ft_putchar_fd(((char)a) + '0', fd);
	else
	{
		ft_putnbr2_fd(a / 10, fd);
		ft_putnbr2_fd(a % 10, fd);
	}
}

void	ft_putnbr_fd(int a, int fd)
{
	if (a < 0)
	{
		ft_putchar_fd('-', fd);
		ft_putnbr2_fd(-a, fd);
	}
	else
		ft_putnbr2_fd(a, fd);
}
