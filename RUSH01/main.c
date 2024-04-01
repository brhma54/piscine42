/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeandel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 12:03:00 by ajeandel          #+#    #+#             */
/*   Updated: 2023/12/03 16:52:49 by athill           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	check_format(char *str);

int	check_input(char *str);

int	parse_input(char *str, int ***input);

int	solve(int **inputs, int **grid, int size, int *row_col);

int	**grid_init(int size)
{
	int	i;
	int	j;
	int	**grid;

	i = 0;
	grid = malloc(sizeof(int *) * size);
	while (i < size)
	{
		grid[i] = malloc(sizeof(int) * size);
		j = 0;
		while (j < size)
		{
			grid[i][j] = 0;
			j++;
		}
		i++;
	}
	return (grid);
}

void	grid_print(int **grid, int size)
{
	char	c;
	int		i;
	int		j;

	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			c = grid[i][j] + '0';
			write(1, &c, 1);
			if (j < size - 1)
				write(1, " ", 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}

int	main(int argc, char *argv[])
{
	int	size;
	int	**inputs;
	int	**grid;
	int	row_col[2];

	if (argc != 2 || !check_format(argv[1]) || !check_input(argv[1]))
	{
		write(1, "Error\n", 6);
		return (0);
	}
	size = parse_input(argv[1], &inputs);
	grid = grid_init(size);
	row_col[0] = 0;
	row_col[1] = 0;
	if (solve(inputs, grid, size, row_col))
		grid_print(grid, size);
	else
		write(1, "Error\n", 6);
	return (0);
}
