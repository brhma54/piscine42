/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeandel <ajeandel@student.42luxembourg.lu>+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 19:33:45 by ajeandel          #+#    #+#             */
/*   Updated: 2023/11/23 14:03:19 by ajeandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int		x;

	x = *a;
	*a = x / *b;
	*b = x % *b;
}
/*int	main(){

	int	x;
	int	y;

	x = 15;
	y = 10;

	int	*pX;
	int	*pY;

	pX = &x;
	pY = &y;

	ft_ultimate_div_mod(pX,pY);
	printf("Division : %d \n ",x)
	printf("Modulo : %d",y);
	return 0;
}*/
