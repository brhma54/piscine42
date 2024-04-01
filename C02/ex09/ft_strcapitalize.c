/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeandel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 12:23:43 by ajeandel          #+#    #+#             */
/*   Updated: 2023/11/26 16:36:06 by ajeandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

int	ischar(char c)
{
	if ((c < 'a' || 'z' < c) && (c < 'A' || 'Z' < c) && (c < '0' || '9' < c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && 'Z' >= str[i])
		{
			str[i] = str[i] + 32;
		}
		if (ischar(str[i - 1]) == 1)
		{
			if (str[i] >= 'a' && 'z' >= str[i])
			{
				str[i] = str[i] - 32;
			}
		}
		i++;
	}
	if (str[0] >= 'a' && 'z' >= str[0])
	{
		str[0] = str[0] - 32;
	}
	return (str);
}

/*int	main() {

	char test[] = "helloWORld  thIs+is    42a test";
	//ft_strcapitalize(test);
	printf("%s", ft_strcapitalize(test));
	return (0);
}*/
