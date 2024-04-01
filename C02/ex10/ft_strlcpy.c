/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeandel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 12:38:17 by ajeandel          #+#    #+#             */
/*   Updated: 2023/12/04 12:48:14 by ajeandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>
#include <bsd/string.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	x;

	i = 0;
	x = 0;
	while (src[x] != 0)
		x++;
	if (size < 1)
		return (x);
	while (src[i] != '\0' && (i < (size - 1)))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (x);
}

/*int main()
{
     char str[] = "testons";
     char *str2 = "abcd";
     int	x;


     x = 0;
     x = strlcpy(str, str2, -2);
     printf("%s\n", str);
     printf("%d",x);
     return 0;
}*/
