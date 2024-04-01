/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeandel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 11:26:39 by ajeandel          #+#    #+#             */
/*   Updated: 2023/11/29 20:54:00 by ajeandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

int	ft_find_next_prime(int nb)
{
	unsigned int	temp;
	unsigned int	i;
	unsigned int	boolean;

	temp = nb;
	boolean = 2;
	i = 2;
	if (temp <= 2)
		return (2);
	while (boolean == 2)
	{
		boolean = 0;
		i = 2;
		while (i * i <= temp)
		{
			if (temp % i == 0)
				boolean = 2;
			i++;
		}
		temp++;
	}
	return (temp - 1);
}

/*int main()
{
	printf("%d",ft_find_next_prime(2147483647));
}*/
