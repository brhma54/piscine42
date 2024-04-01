/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validator_see.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athill <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 15:51:17 by athill            #+#    #+#             */
/*   Updated: 2023/12/03 15:32:24 by athill           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	count_see_left(int **grid, int size, int row, int *limit)
{
	int	i;
	int	see;
	int	max;

	i = 1;
	see = 1;
	max = grid[row][0];
	while (i < size)
	{
		if (grid[row][i] == 0)
			break ;
		if (grid[row][i] > max)
		{
			see++;
			max = grid[row][i];
			if (grid[row][i] == size)
				break ;
		}
		i++;
	}
	*limit = see + (size - max);
	return (see);
}

int	count_see_right(int **grid, int size, int row)
{
	int	i;
	int	see;
	int	max;

	i = size - 2;
	see = 1;
	max = grid[row][size - 1];
	while (i >= 0)
	{
		if (grid[row][i] > max)
		{
			see++;
			if (grid[row][i] == size)
				return (see);
			max = grid[row][i];
		}
		i--;
	}
	return (see);
}

int	count_see_up(int **grid, int size, int col, int *limit)
{
	int	i;
	int	see;
	int	max;

	i = 1;
	see = 1;
	max = grid[0][col];
	while (i < size)
	{
		if (grid[i][col] == 0)
			break ;
		if (grid[i][col] > max)
		{
			see++;
			max = grid[i][col];
			if (grid[i][col] == size)
				break ;
		}
		i++;
	}
	*limit = see + (size - max);
	return (see);
}

int	count_see_down(int **grid, int size, int col)
{
	int	i;
	int	see;
	int	max;

	i = size - 2;
	see = 1;
	max = grid[size - 1][col];
	while (i >= 0)
	{
		if (grid[i][col] > max)
		{
			see++;
			if (grid[i][col] == size)
				return (see);
			max = grid[i][col];
		}
		i--;
	}
	return (see);
}
