/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeandel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 14:04:51 by ajeandel          #+#    #+#             */
/*   Updated: 2023/11/28 15:43:02 by ajeandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

int	ft_strlen(char *str)
{
	char	c;
	int		x;

	x = 0;
	c = str[x];
	while (c != '\0')
	{
		x++;
		c = str[x];
	}
	return (x);
}
/*int	main()
{	char	test[]="123456789";
	printf("%d",ft_strlen(test));
	return (0);
}*/
