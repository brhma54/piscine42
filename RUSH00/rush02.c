/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljacquem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 12:35:25 by ljacquem          #+#    #+#             */
/*   Updated: 2023/11/25 13:04:30 by ajeandel         ###   ########.fr       */
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
			if (i == 1 && (j == 1 || j == col))
				ft_putchar('A');
			else if (i == row && (j == 1 || j == col))
				ft_putchar('C');
			else if (i == 1 || j == 1 || i == row || j == col)
				ft_putchar('B');
			else
				ft_putchar(' ');
		}
		ft_putchar('\n');
	}
}
