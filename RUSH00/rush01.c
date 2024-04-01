/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeandel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 10:27:42 by ajeandel          #+#    #+#             */
/*   Updated: 2023/11/25 13:20:40 by ajeandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int row, int col)
{
	int		i;
	int		j;

	i = 0;
	while (i++ < row)
	{
		j = 0;
		while (j++ < col)
		{
			if ((i == 1 && j == 1) || (i == row && j == col))
				ft_putchar('/');
			else if ((i == row && j == 1) || (i == 1 && j == col))
				ft_putchar('\\');
			else if (i == 1 || j == 1 || i == row || j == col)
				ft_putchar('*');
			else
				ft_putchar(' ');
		}
		ft_putchar('\n');
	}
}
