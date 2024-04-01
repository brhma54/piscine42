/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeandel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 11:40:00 by ajeandel          #+#    #+#             */
/*   Updated: 2023/11/26 14:29:27 by ajeandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;
	int	res;

	i = 0;
	res = 1;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || 126 < str[i])
		{
			res = 0;
		}
		i++;
	}
	if (str[0] == '\0')
	{
		return (1);
	}
	return (res);
}

/*int	main() {
	char	*test;
	int	res;

	res = 2;
	test = "";
	res = ft_str_is_printable(test);
	printf("%d", res);
	test = "Hello\ndwd";
	res = ft_str_is_printable(test);
	printf("%d", res);
	test = "He11oW0rld";
	res = ft_str_is_printable(test);
	printf("%d", res);
	return (0);
}*/
