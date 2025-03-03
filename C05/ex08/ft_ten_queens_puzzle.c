/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeandel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 09:50:20 by ajeandel          #+#    #+#             */
/*   Updated: 2023/11/30 18:29:08 by ajeandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_ten_queens_puzzle_test(int table[10], int x, int y)
{
	int	i;

	i = -1;
	while (i < x)
	{
		if (y == table[i] || i + table[i] == x + y
			|| i - table[i] == x - y)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

void	ft_ten_queens_puzzle_recur(int table[10], int *res, int pos)
{
	int	i;
	int	i2;

	if (pos == 10)
	{
		*res += 1;
		i2 = -1;
		while (++i2 < 10)
			ft_putchar(table[i2] + '0');
		ft_putchar('\n');
	}
	else
	{
		i = -1;
		while (++i < 10)
		{
			if (ft_ten_queens_puzzle_test(table, pos, i))
			{
				table[pos] = i;
				ft_ten_queens_puzzle_recur(table, res, pos + 1);
			}
		}
	}
}

int	ft_ten_queens_puzzle(void)
{
	int		table[10];
	int		i;
	int		res;

	i = -1;
	while (++i < 10)
		table[i] = -1;
	res = 0;
	ft_ten_queens_puzzle_recur(table, &res, 0);
	return (res);
}

/*int main()
{
	ft_ten_queens_puzzle();
}*/
