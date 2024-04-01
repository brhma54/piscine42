/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeandel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 14:09:48 by ajeandel          #+#    #+#             */
/*   Updated: 2023/12/03 18:01:20 by ajeandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	i;

	i = 0;
	if (min >= max)
	{
		return (NULL);
	}
	tab = (int *)malloc(sizeof(int) * ((max - min) + 1));
	if (tab == NULL)
		return (NULL);
	while (max > min)
	{
		tab[i] = min;
		i++;
		min++;
	}
	return (tab);
}

/*int main()
{
	int	x = 100;
	int	y = 1;
	int	*tab;
//	int i = 0;

	tab = ft_range(x,y);
	
//	while (*tab)
//	{
//		printf("%d\n",tab[i]);
//		i++;
//	}
	return 0;
}*/
