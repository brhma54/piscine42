/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeandel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 14:19:07 by ajeandel          #+#    #+#             */
/*   Updated: 2023/11/29 15:59:11 by ajeandel         ###   ########.fr       */
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

int	check_mini(char *str)
{
	int	len;

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
	if (check_mini(base) == 1)
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

int	ft_atoi(char *str)
{
	int	i;
	int	res;
	int	j;

	i = 0;
	res = 0;
	j = 1;
	while ((str[i] == ' ' || str[i] == '\t')
		|| (str[i] == '\f' || str[i] == '\r')
		|| (str[i] == '\n' || str[i] == '\v'))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			j = -j;
		i++;
	}
	while ('0' <= str[i] && str[i] <= '9')
	{
		res = res * 10 + (str[i] - 48);
		i++;
	}
	return (res * j);
}

int	ft_atoi_base(char *str, char *base)
{
	int	nbr;

	nbr = 0;
	nbr = ft_atoi(str);
	ft_putnbr_base(nbr, base);
}

/*int main()
{
	char *base;
	char *atoi;

	base = "0123456789";
	atoi = "     ---++--5487aad23";
	
	ft_atoi_base(atoi, base);
}*/
