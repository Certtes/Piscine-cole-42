/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbourrec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 17:27:13 by tbourrec          #+#    #+#             */
/*   Updated: 2022/08/16 18:25:20 by tbourrec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*voiture;
	int	i;

	if (min >= max)
		return (NULL);
	voiture = (int *)malloc((max - min) * sizeof(int));
	if (!voiture)
		return (NULL);
	i = 0;
	while (min < max)
	{
		voiture[i] = min;
		min++;
		i++;
	}	
	return (voiture);
}

/*int main(void)
{
	int min = -3, max = 6;
	int *i = ft_range(min, max);
	for (int j = 0; min < max ; j++)
	{
		printf("%d\t", i[j]);
		min++;
	}
}*/
