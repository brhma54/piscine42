/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeandel <ajeandel@student.42luxembourg.lu>+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 19:33:45 by ajeandel          #+#    #+#             */
/*   Updated: 2023/11/24 10:14:07 by ajeandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_print_numbers(void)
{
	char	x;

	x = '0' ;
	while (x <= '9')
	{
		write(1, &x, 1);
		x++;
	}
}

/*int	main()
{
	ft_print_numbers();
	return (0);
}*/
