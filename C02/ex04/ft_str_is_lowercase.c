/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeandel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 11:27:04 by ajeandel          #+#    #+#             */
/*   Updated: 2023/11/26 14:29:01 by ajeandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;
	int	res;

	i = 0;
	res = 1;
	while (str[i] != '\0')
	{
		if ((str[i] < 'a' || 'z' < str[i]))
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
	res = ft_str_is_lowercase(test);
	printf("%d", res);
	test = "HelloWorld";
	res = ft_str_is_lowercase(test);
	printf("%d", res);
	test = "helloworld";
	res = ft_str_is_lowercase(test);
	printf("%d", res);
	return (0);
}*/
