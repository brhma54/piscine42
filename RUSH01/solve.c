/* ************************************************************************** */
/*																			*/
/*														:::	  ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*													+:+ +:+		 +:+	 */
/*   By: athill <marvin@42.fr>					  +#+  +:+	   +#+		*/
/*												+#+#+#+#+#+   +#+		   */
/*   Created: 2023/12/02 17:38:37 by athill			#+#	#+#			 */
/*   Updated: 2023/12/03 16:49:21 by athill           ###   ########.fr       */
/*																			*/
/* ************************************************************************** */

int	validate_cell(int **inputs, int **grid, int size, int row_col[2]);

void	init_row_col(int size, int row_col[2], int row_col_next[2])
{
	if (row_col[1] == size - 1)
	{
		row_col_next[0] = row_col[0] + 1;
		row_col_next[1] = 0;
	}
	else
	{
		row_col_next[0] = row_col[0];
		row_col_next[1] = row_col[1] + 1;
	}
}

int	solve(int **inputs, int **grid, int size, int row_col[2])
{
	int	i;
	int	row_col_next[2];

	if (row_col[0] == size)
		return (1);
	init_row_col(size, row_col, row_col_next);
	i = 0;
	while (i < size)
	{
		i++;
		grid[row_col[0]][row_col[1]] = i;
		if (!validate_cell(inputs, grid, size, row_col))
			continue ;
		if (solve(inputs, grid, size, row_col_next))
			return (1);
	}
	grid[row_col[0]][row_col[1]] = 0;
	return (0);
}
