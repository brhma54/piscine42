/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehamm <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 11:51:34 by ehamm             #+#    #+#             */
/*   Updated: 2023/12/12 14:08:54 by ehamm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	calculator(int num1, char operator, int num2)
{
	if (operator == '+')
		ft_putnbr(num1 + num2);
	else if (operator == '-')
		ft_putnbr(num1 - num2);
	else if (operator == '/')
	{
		if (num2 == 0)
			write(1, "Stop : division by zero", 23);
		else
			ft_putnbr(num1 / num2);
	}
	else if (operator == '*')
		ft_putnbr(num1 * num2);
	else if (operator == '%')
	{
		if (num2 == 0)
			write(1, "Stop : modulo by zero", 22);
		else
			ft_putnbr(num1 % num2);
	}
	else
		write(1, "0", 1);
}

char	ft_find_operator(char *str)
{
	if (str[0] == '\0' || str[1] != '\0')
		return (0);
	return (str[0]);
}

int	main(int argc, char **argv)
{
	int		a;
	int		b;
	char	operator;

	a = 0;
	b = 0;
	if (argc != 4)
		return (-1);
	a = ft_atoi(argv[1]);
	b = ft_atoi(argv[3]);
	operator = ft_find_operator(argv[2]);
	calculator(a, operator, b);
}
