/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeandel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 18:29:46 by ajeandel          #+#    #+#             */
/*   Updated: 2023/11/27 11:55:32 by ajeandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;
	int	res;

	i = 0;
	res = 1;
	while (str[i] != '\0')
	{
		if (str[i] < '0' || '9' < str[i])
		{
			res = 0;
		}
		i++;
	}
	return (res);
}

/*int	main() {
	char	*test;
	int	res;

	res = 2;
	test = "@@=)(/";
	res = ft_str_is_numeric(test);
	printf("%d", res);
	test = "HelloWorld";
	res = ft_str_is_numeric(test);
	printf("%d", res);
	test = "26484684";
	res = ft_str_is_numeric(test);
	printf("%d", res);
	return (0);
}*/
