/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeandel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 10:39:46 by ajeandel          #+#    #+#             */
/*   Updated: 2023/12/03 18:00:06 by ajeandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

int	ft_strlen(char *str)
{
	int		x;

	x = 0;
	while (str[x] != '\0')
	{
		x++;
	}
	return (x);
}

char	*ft_strdup(char *src)
{
	char	*src2;
	int		length;
	int		i;

	i = 0;
	length = ft_strlen(src);
	src2 = (char *)malloc(sizeof(char) * (length + 1));
	if (src2 == NULL)
		return (NULL);
	while (src[i])
	{
		src2[i] = src[i];
		i++;
	}
	src2[i] = '\0';
	return (src2);
}

/*int main()
{
	char	*dest;
	char	*src;

	src = "this is a test";

	dest = ft_strdup(src);
	printf("%s",dest);
	return 0;
}*/
