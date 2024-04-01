/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeandel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 12:53:57 by ajeandel          #+#    #+#             */
/*   Updated: 2023/12/04 12:57:12 by ajeandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

void	ft_putstr_non_printable(char *str)
{
	char	*hexa;
	int		i;
	int		temp;

	i = 0;
	hexa = "0123456789abcdef";
	while (str[i] != 0)
	{
		if ((str[i] < 32 && str[i] >= 0) || str[i] > 126)
		{
			write(1, "\\", 1);
			temp = str[i] / 16;
			write(1, &hexa[temp], 1);
			temp = str[i] % 16;
			write(1, &hexa[temp], 1);
		}
		else
		{
			write(1, &str[i], 1);
		}
		i++;
	}
}

/*int main()
{
	char *test;
	test = "Coucou\ttu vas bien ?";
	ft_putstr_non_printable(test);
	return 0;
}*/
