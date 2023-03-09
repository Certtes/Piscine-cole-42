/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbourrec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 10:38:09 by tbourrec          #+#    #+#             */
/*   Updated: 2022/08/10 12:14:11 by tbourrec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
	}
	if (nb <= -10 || nb >= 10)
	{
		if (nb < 0)
			ft_putnbr(-(nb / 10));
		else
			ft_putnbr((nb / 10));
	}
	if (nb > 0)
		ft_putchar('0' + (nb % 10));
	else
		ft_putchar('0' + -(nb % 10));
}
