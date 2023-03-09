/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbourrec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 12:24:44 by tbourrec          #+#    #+#             */
/*   Updated: 2022/08/18 12:46:26 by tbourrec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_is_separator(char *str, char *charset)
{
	while (*charset)
		if (*str == *charset++)
			return (1);
	return (0);
}

int	ft_wordlen(char *str, char *charset)
{
	int	i;

	i = 0;
	while (str[i] && !ft_is_separator(str + i, charset))
		i++;
	return (i);
}

int	ft_wordcount(char *str, char *charset)
{
	int	i;
	int	w;

	w = 0;
	while (*str)
	{
		while (*str && ft_is_separator(str, charset))
			str++;
		i = ft_wordlen(str, charset);
		str += i;
		if (i)
			w++;
	}
	return (w);
}

char	*ft_wordcpy(char *src, int n)
{
	char	*dest;

	dest = malloc((n + 1) * sizeof(char));
	if (!dest)
		return (NULL);
	dest[n] = '\0';
	while (n--)
		dest[n] = src[n];
	return (dest);
}

char	**ft_split(char *str, char *charset)
{
	char	**t;
	int		size;
	int		i;
	int		n;

	size = ft_wordcount(str, charset);
	t = malloc((size + 1) * sizeof(char *));
	if (!t)
		return (NULL);
	i = 0;
	while (i < size)
	{
		while (*str && ft_is_separator(str, charset))
			str++;
		n = ft_wordlen(str, charset);
		t[i] = ft_wordcpy(str, n);
		if (!t[i])
			return (NULL);
		str += n;
		i++;
	}
	t[size] = 0;
	return (t);
}

/*#include <stdio.h>

int main(int ac, char **av)
{
	(void)ac;
	char **tab;
	int i;
	tab = ft_split(av[1], av[2]);
	
	i = 0;
	while (tab[i])
	{
		printf("%s \n", tab[i]);
		i++;
	}
	return (0);
}*/
