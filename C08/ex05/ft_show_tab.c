/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeandel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 11:06:42 by ajeandel          #+#    #+#             */
/*   Updated: 2023/12/04 12:15:47 by ajeandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "ft_stock_str.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int		x;

	x = 0;
	while (str[x] != '\0')
	{
		x++;
	}
	write(1, str, x);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
	}
	else
	{
		if (nb < 0)
		{
			nb = -nb;
			ft_putchar('-');
		}
		if (nb >= 10)
		{
			ft_putnbr(nb / 10);
			nb = nb % 10;
		}
		if (nb < 10)
		{
			ft_putchar(nb + '0');
		}
	}
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (par[i].str)
	{
		len++;
		i++;
	}
	i = 0;
	while (i < len)
	{
		ft_putstr(par[i].str);
		write(1, "\n", 1);
		ft_putnbr(par[i].size);
		write(1, "\n", 1);
		ft_putstr(par[i].copy);
		write(1, "\n", 1);
		i++;
	}
}

/*int main(void)
{
	char	*c1[]={"salut","coucou"};
	int	size = 2;
	ft_show_tab(ft_strs_to_tab(size,c1));
	return 0;
}*/
