/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeandel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 13:47:55 by ajeandel          #+#    #+#             */
/*   Updated: 2023/12/09 11:44:08 by ajeandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

char	*ft_strcat(char *dest, char *src)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != 0)
	{
		i++;
	}
	while (src[j] != 0)
	{
		dest[i + j] = src[j];
		j++;
	}
	return (dest);
}

int	ft_strlen(char *str)
{
	int		x;

	x = 0;
	while (str[x])
	{
		x++;
	}
	return (x);
}

char	*taille_mlc(int size, char **strs, char *sep)
{
	int		i;
	int		len;
	char	*str;

	str = 0;
	len = 0;
	i = 0;
	while (i < size)
	{
		len = len + ft_strlen(strs[i]);
		i++;
	}
	len = len + ft_strlen(sep) * (size - 1);
	if (size < 0)
		len = 1;
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (0);
	return (str);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*tab;

	i = 0;
	tab = taille_mlc(size, strs, sep);
	if (size < 1)
	{
		tab = NULL;
		return (tab);
	}
	while (i < size)
	{
		tab = ft_strcat(tab, strs[i]);
		if (i != size - 1)
		{
			tab = ft_strcat(tab, sep);
		}
		i++;
	}
	tab[ft_strlen(tab)] = '\0';
	return (tab);
}

/*int	main(void)
{
	char	*tab[4];
	tab[0] = "Ceci";
	tab[1] = "est";
	tab[2] = "un";
	tab[3] = "test";
	printf("%s", ft_strjoin(4, tab, ", "));
	return (0);
}*/
