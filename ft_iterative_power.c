/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbourrec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 12:10:20 by tbourrec          #+#    #+#             */
/*   Updated: 2022/08/14 12:28:46 by tbourrec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;

	if (power < 1)
		return (!power);
	i = nb;
	while (--power)
		i *= nb;
	return (i);
}
