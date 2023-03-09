/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbourrec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 13:12:59 by tbourrec          #+#    #+#             */
/*   Updated: 2022/08/17 13:43:51 by tbourrec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_test_pos(char *tab, int col)
{
	int	l;

	l = 0;
	while (l < col)
	{
		if (tab[l] + l == tab[col] + col || tab[l] - l == tab[col] - col)
			return (0);
		if (tab[l] == tab[col])
			return (0);
		l++;
	}
	return (1);
}

void	ft_backtracking(char *tab, int colonne, int *nb)
{
	int	i;

	i = -1;
	if (colonne == 10)
	{
		while (++i < 10)
			write(1, &tab[i], 1);
		write(1, "\n", 1);
		*nb += 1;
		return ;
	}
	tab[colonne] = '0';
	while (tab[colonne] <= '9')
	{
		if (ft_test_pos(tab, colonne))
			ft_backtracking(tab, colonne + 1, &(*nb));
		tab[colonne]++;
	}
}

int	ft_ten_queens_puzzle(void)
{
	char	tab[10];
	int		nb;

	nb = 0;
	ft_backtracking(tab, 0, &nb);
	return (nb);
}	
