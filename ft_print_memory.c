/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbourrec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 14:59:01 by tbourrec          #+#    #+#             */
/*   Updated: 2022/08/16 17:16:08 by tbourrec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putaddr(unsigned long addr)
{
	int		i;
	char	addr_to_print[16];
	char	*hex;

	hex = "0123456789abcdef";
	i = 0;
	while (i < 16)
	{
		if (addr > 0)
		{
			addr_to_print[15 - i] = hex[addr % 16];
			addr = addr / 16;
		}
		else
		{
			addr_to_print[15 - i] = '0';
		}
		i++;
	}
	write(1, addr_to_print, 16);
	write(1, ": ", 2);
}

void	ft_puthexa(unsigned char *int_to_hexa, unsigned int size)
{
	unsigned int	i;
	char			*hex;

	i = 0;
	hex = "0123456789abcdef";
	while (i < 16)
	{
		if (i < size)
		{
			write(1, &hex[int_to_hexa[i] / 16], 1);
			write(1, &hex[int_to_hexa[i] % 16], 1);
		}
		else
		{
			write(1, "  ", 2);
		}
		if (i % 2 == 1)
		{
			write(1, " ", 1);
		}
		i++;
	}
}

void	ft_puttext(char *text, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (i < size)
	{
		if (text[i] < ' ' || text[i] > '~')
		{
			write(1, ".", 1);
		}
		else
			write(1, &text[i], 1);
		++i;
	}
}

void	ft_putline(void *addr, unsigned int size)
{
	ft_putaddr((unsigned long)addr);
	ft_puthexa((unsigned char *)addr, size);
	ft_puttext((char *)addr, size);
	write(1, "\n", 1);
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	i;
	int				remainder;

	i = 0;
	remainder = size % 16;
	while (i < size / 16)
	{
		ft_putline(addr + (16 * i), 16);
		i++;
	}
	if (remainder)
	{
		ft_putline(addr + (16 * i), remainder);
	}
	return (addr);
}
