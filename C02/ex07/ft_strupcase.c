/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeandel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 11:51:57 by ajeandel          #+#    #+#             */
/*   Updated: 2023/11/27 09:34:50 by ajeandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

char	*ft_strupcase(char *str)
{
	char	c;
	int		i;

	i = 0;
	c = 0;
	while (str[i] != 0)
	{
		if (str[i] >= 'a' && 'z' >= str[i])
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	str[i] = '\0';
	return (str);
}

/*int	main() {

	char test[] = "HelloWorld";
	ft_strupcase(test);
	printf("%s", test);
	return (0);
}*/