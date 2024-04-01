/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_string.tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehamm <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 12:09:19 by ehamm             #+#    #+#             */
/*   Updated: 2023/12/13 12:20:22 by ehamm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && *s1)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

void	ft_sort_string_tab(char **tab)
{
	int		i;
	int		j;
	char	*box;

	i = 0;
	j = 0;
	while (i == 0)
	{
		i = 1;
		j = 0;
		while (tab[j +1])
		{
			if (ft_strcmp(tab[j], tab[j +1]) > 0)
			{
				i = 0;
				box = tab[j];
				tab[j] = tab[j +1];
				tab[j +1] = box;
			}
			j++;
		}
	}
}

/*int	main(int argc, char **argv)
{
	int		i;

	ft_sort_string_tab(argv);
	i = 0;
	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}*/
