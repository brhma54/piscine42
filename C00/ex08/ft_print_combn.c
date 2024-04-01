/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeandel <ajeandel@student.42luxembourg.lu>+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 19:33:45 by ajeandel          #+#    #+#             */
/*   Updated: 2023/12/04 12:40:31 by ajeandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_printchar(char x, char y, char z)
{
	write(1, &x, 1);
}

void	ft_print_combn(int n)
{
	int	i;
	int	j;
	
	i = 0;
	j = 0;
	if (n <= '9')
	{

		while (i <= n)
		{
			j = j + i
			while (j <= n)
			{
				ft_printchar(i);
				ft_printchar(j);
				{
					write(1, ", ", 2);
				}
			}
		}
	}
}

int	main()
{
	ft_print_combn(5);
	return 0;
}
