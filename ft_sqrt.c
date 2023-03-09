/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbourrec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 14:35:24 by tbourrec          #+#    #+#             */
/*   Updated: 2022/08/14 14:50:32 by tbourrec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	unsigned int	i;

	if (nb < 1)
		return (0);
	i = 1;
	while (i * i < (unsigned int)nb)
		i++;
	if (i * i == (unsigned int)nb)
		return (i);
	else
		return (0);
}
