/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeandel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 14:46:07 by ajeandel          #+#    #+#             */
/*   Updated: 2023/11/27 17:58:28 by ajeandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <bsd/string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int		i;

	i = 0;
	while (s1[i] == s2[i])
	{
		if (s1[i] == '\0')
		{
			return (0);
		}
		i++;
	}	
	return (s1[i] - s2[i]);
}

/*int	main()
{
	char *str1 = "abcd";
	char *str2 = "aeCd";
	char *str3 = "abcd";
	int result;

	result = ft_strcmp(str1, str2);	
	printf("strcmp(str1, str2) = %d\n", result);
	result = ft_strcmp(str1, str3);
	printf("strcmp(str1, str3) = %d\n", result);
	return 0;
}*/
