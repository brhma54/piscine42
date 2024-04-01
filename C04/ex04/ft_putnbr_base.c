/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeandel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 14:25:12 by ajeandel          #+#    #+#             */
/*   Updated: 2023/12/08 10:02:01 by ajeandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

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

int	check_mini(int nbr, char *str)
{
	int	len;

	if (nbr > 2147483647 || nbr < -2147483648)
		return (0);
	len = ft_strlen(str);
	if (len < 2)
		return (0);
	return (1);
}

int	check_base(char *base)
{
	int	i;
	int	j;
	int	compt;

	i = 0;
	j = 0;
	compt = 0;
	while (base[i] != 0)
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		while (base[j] != 0)
		{
			if (base[i] == base[j])
				compt++;
			j++;
		}
		if (compt > 1)
			return (0);
		j = 0;
		compt = 0;
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long		len;
	long		nbr2;

	nbr2 = nbr;
	len = ft_strlen(base);
	if (check_mini(nbr2, base) == 1)
	{
		if (nbr2 < 0)
		{
			write(1, "-", 1);
			nbr2 = -nbr2;
		}
		if (check_base(base) == 1)
		{
			if (nbr2 >= len)
			{
				ft_putnbr_base(nbr2 / len, base);
				nbr2 = nbr2 % len;
			}
			if (nbr2 < len)
				write(1, &base[nbr2], 1);
		}
	}
}

/*int main()
{
	char *base;
	int nbr;

	base = "0123456789";
	nbr = 10;
	
	ft_putnbr_base(nbr, base);
}*/
