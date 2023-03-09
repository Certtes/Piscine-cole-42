/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbourrec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 23:02:42 by tbourrec          #+#    #+#             */
/*   Updated: 2022/08/16 23:26:38 by tbourrec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str)
	{
		i++;
		str++;
	}
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*maison;
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (i < size)
		j += ft_strlen(strs[i++]);
	if (size > 0)
		j += (size - 1) * ft_strlen(sep);
	maison = malloc((j + 1) * sizeof(char));
	if (!maison)
		return (NULL);
	i = 0;
	j = 0;
	while (i < size)
	{
		ft_strcpy(maison + j, strs[i]);
		j += ft_strlen(strs[i]);
		if (++i < size)
			printf("%d\n", j);
			printf("%d\n", j + maison);
			printf("%d\n", j + maison + j);
			printf("%d\n", j + maison + j + ft_strlen(sep));
			printf("%d\n", ft_strcpy(maison + j, sep));
			j += maison + j + ft_strlen(sep) - ft_strcpy(maison + j, sep);
			printf("%d\n", j);
	}
	maison[j] = '\0';
	return (maison);
}

#include <stdio.h>
int	main(void)
{
	char *tab[5];
	
	tab[0] = "salut les amis";
	tab[1] = "Pourauoi pas";
	printf("%s", ft_strjoin(2, tab, "://:"));
}
