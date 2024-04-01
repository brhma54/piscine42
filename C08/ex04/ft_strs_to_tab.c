/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeandel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 17:19:34 by ajeandel          #+#    #+#             */
/*   Updated: 2023/12/04 12:17:09 by ajeandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	char	c;
	int		x;

	x = 0;
	c = str[x];
	while (c != '\0')
	{
		x++;
		c = str[x];
	}
	return (x);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*tab;
	int			i;

	i = 0;
	tab = malloc(sizeof(t_stock_str) * (ac + 1));
	if (tab == NULL)
		return (NULL);
	tab->size = 0;
	tab->str = 0;
	tab->copy = 0;
	while (i < ac)
	{
		tab[i].size = ft_strlen(av[i]);
		tab[i].str = (char *)malloc(sizeof(char) * (tab[i].size + 1));
		tab[i].str = av[i];
		tab[i].copy = (char *)malloc(sizeof(char) * (tab[i].size + 1));
		tab[i].copy = ft_strcpy(tab[i].copy, tab[i].str);
		i++;
	}
	tab[i].str = 0;
	return (tab);
}
