/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeandel <ajeandel@student.42luxembourg.lu>+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 19:33:45 by ajeandel          #+#    #+#             */
/*   Updated: 2023/11/23 14:02:14 by ajeandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b ;
	*mod = a % b ;
}
/*int	main(){

	int	x;
	int	y;
	int	a;
	int	b;

	x = 15;
	y = 10;

	int	*pX;
	int	*pY;

	pX = &a;
	pY = &b;

	ft_div_mod(x,y,pX,pY);
	printf("Division : %d \n",a);
	printf("Modulo : %d",b);
	return 0;
}*/
