/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeandel <ajeandel@student.42luxembourg.lu>+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 18:21:02 by ajeandel          #+#    #+#             */
/*   Updated: 2023/11/24 09:57:03 by ajeandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	transform(int x)
{
	char	diz;
	char	unit;

	diz = (x / 10) + '0';
	unit = (x % 10) + '0';
	write(1, &diz, 1);
	write(1, &unit, 1);
}

void	afficher_comma(void)
{
	char	comma;

	comma = 44;
	write(1, &comma, 1);
}

void	afficher_space(void)
{
	char	space;

	space = 32;
	write(1, &space, 1);
}

void	ft_print_comb2(void)
{
	int	x;
	int	y;

	x = 0;
	while (x <= 99)
	{
		y = x + 1;
		while (y <= 99)
		{
			transform(x);
			afficher_space();
			transform(y);
			if (x < 98)
			{
				afficher_comma();
				afficher_space();
			}
			y++;
		}
		x++;
	}
}

/*int	main()
{
	ft_print_comb2();
	return (0);
}*/
