/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljacquem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 12:35:14 by ljacquem          #+#    #+#             */
/*   Updated: 2023/11/25 13:03:43 by ajeandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int col, int row)
{
	int	i;
	int	j;

	i = 0;
	while (++i <= row)
	{
		j = 0;
		while (++j <= col)
		{
			if ((i == 1 && j == 1) || (i == row && j == col))
				ft_putchar('o');
			else if ((i == 1 && j == col) || (i == row && j == 1))
				ft_putchar('o');
			else if (i == 1 || i == row)
				ft_putchar('-');
			else if (j == 1 || j == col)
				ft_putchar('|');
			else
				ft_putchar(' ');
		}
		ft_putchar('\n');
	}
}
