/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeandel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 14:27:35 by ajeandel          #+#    #+#             */
/*   Updated: 2023/11/26 14:28:31 by ajeandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;
	int	res;

	i = 0;
	res = 1;
	while (str[i] != '\0')
	{
		if ((str[i] < 'a' || 'z' < str[i]) && (str[i] < 'A' || 'Z' < str[i]))
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
	res = ft_str_is_alpha(test);
	printf("%d", res);
	test = "HelloWorld";
	res = ft_str_is_alpha(test);
	printf("%d", res);
	test = "He11oW0rld";
	res = ft_str_is_alpha(test);
	printf("%d", res);
	return (0);
}*/
