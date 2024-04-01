/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeandel <ajeandel@student.42luxembourg.lu>+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 19:33:45 by ajeandel          #+#    #+#             */
/*   Updated: 2023/11/23 14:07:37 by ajeandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	x;
	int	y;

	x = *b;
	y = *a;
	*b = y;
	*a = x;
}
/*int	main(){

	int	x;
	int	y;
	int	*pX;
	int	*pY;

	x = 15;
	y = 10;
	pX = &x;
	pY = &y;

	ft_swap(pX,pY);
	printf("First : %d \n",x);
	printf("Second : %d",y);
	return 0;
}*/
