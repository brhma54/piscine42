/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeandel <ajeandel@student.42luxembourg.lu>+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 19:33:45 by ajeandel          #+#    #+#             */
/*   Updated: 2023/11/23 13:03:27 by ajeandel         ###   ########.fr       */
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
{
	char	test[]="123456789";
	printf("%d",ft_strlen(test));
	return (0);
}*/
