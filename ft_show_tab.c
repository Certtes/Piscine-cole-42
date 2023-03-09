/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbourrec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 23:28:48 by tbourrec          #+#    #+#             */
/*   Updated: 2022/08/21 11:15:08 by tbourrec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
	ft_putchar('\n');
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

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	if (!par)
		return ;
	while (par[i].str != 0)
	{
		ft_putstr(par[i].str);
		ft_putnbr(par[i].size);
		ft_putchar('\n');
		ft_putstr(par[i].copy);
		i++;
	}
}
