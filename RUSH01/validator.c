/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validator.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athill <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 14:21:01 by athill            #+#    #+#             */
/*   Updated: 2023/12/03 17:23:39 by athill           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	count_see_left(int **grid, int size, int row, int *limit);

int	count_see_right(int **grid, int size, int row);

int	count_see_up(int **grid, int size, int col, int *limit);

int	count_see_down(int **grid, int size, int col);

void	init_array(int *array, int len, int value)
{
	int	i;

	i = 0;
	while (i < len)
		array[i++] = value;
}

int	is_num_unique(int **grid, int row_col[2])
{
	int	nums[10];
	int	i;

	init_array(nums, 10, 0);
	i = 0;
	while (i <= row_col[1])
	{
		if (nums[grid[row_col[0]][i]])
			return (0);
		nums[grid[row_col[0]][i]] = 1;
		i++;
	}
	init_array(nums, 10, 0);
	i = 0;
	while (i <= row_col[0])
	{
		if (nums[grid[i][row_col[1]]])
			return (0);
		nums[grid[i][row_col[1]]] = 1;
		i++;
	}
	return (1);
}

int	validate_cell(int **inputs, int **grid, int size, int row_col[2])
{
	int	see;
	int	limit;
	int	row;
	int	col;

	row = row_col[0];
	col = row_col[1];
	if (!is_num_unique(grid, row_col))
		return (0);
	see = count_see_up(grid, size, col, &limit);
	if (see > inputs[0][col] || limit < inputs[0][col])
		return (0);
	see = count_see_left(grid, size, row, &limit);
	if (see > inputs[2][row] || limit < inputs[2][row])
		return (0);
	if (col == size - 1 && count_see_right(grid, size, row) != inputs[3][row])
		return (0);
	if (row == size - 1 && count_see_down(grid, size, col) != inputs[1][col])
		return (0);
	return (1);
}
