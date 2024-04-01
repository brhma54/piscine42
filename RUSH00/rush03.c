/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvan-don <kvan-don@student.42luxembou      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 10:36:08 by kvan-don          #+#    #+#             */
/*   Updated: 2023/11/25 12:57:44 by kvan-don         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int col, int row)
{
	int		i;
	int		j;

	i = 0;
	while (++i <= row)
	{
		j = 0;
		while (++j <= col)
		{
			if ((i == 1 && j == 1) || (i == row && j == 1))
				ft_putchar('A');
			else if ((i == 1 && j == col) || (i == row && j == col))
				ft_putchar('C');
			else if ((i == 1 || i == row) || (j == 1 || j == col))
				ft_putchar('B');
			else
				ft_putchar(' ');
		}
		ft_putchar('\n');
	}
}
