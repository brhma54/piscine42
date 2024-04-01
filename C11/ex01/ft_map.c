/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeandel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 09:53:34 by ajeandel          #+#    #+#             */
/*   Updated: 2023/12/06 11:00:35 by ajeandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdlib.h>
#include<unistd.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	i;
	int	*new;

	new = (int *)malloc(sizeof(int) * length);
	if (new == NULL)
		return (new);
	i = 0;
	while (i < length)
	{
		new[i] = f(tab[i]);
		i++;
	}
	return (new);
}
