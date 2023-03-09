/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbourrec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 11:29:05 by tbourrec          #+#    #+#             */
/*   Updated: 2022/08/14 11:55:23 by tbourrec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	resultat;

	i = 1;
	resultat = 1;
	if (nb < 1)
		return (!nb);
	while (i <= nb)
		resultat *= i++;
	return (resultat);
}
