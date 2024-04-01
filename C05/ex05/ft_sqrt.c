/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeandel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 10:27:56 by ajeandel          #+#    #+#             */
/*   Updated: 2023/11/29 14:01:17 by ajeandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (0);
	while (i * i <= nb)
	{
		if (i > 46340)
			return (0);
		if (i * i == nb)
		{
			return (i);
		}
		i++;
	}
	return (0);
}

/*int main ()
{
	printf("%d",ft_sqrt(2147395600));
}*/
