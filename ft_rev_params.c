/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbourrec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 23:29:11 by tbourrec          #+#    #+#             */
/*   Updated: 2022/08/14 23:31:25 by tbourrec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*str++);
	}
}

int	main(int argc, char **argv)
{
	int	i;

	i = 1;
	while (i < argc--)
	{
		ft_putstr(argv[argc]);
		ft_putchar('\n');
	}
	return (0);
}	
