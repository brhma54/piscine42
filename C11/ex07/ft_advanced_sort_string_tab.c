/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_string_tab.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehamm <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 10:55:58 by ehamm             #+#    #+#             */
/*   Updated: 2023/12/13 10:54:15 by ehamm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void	ft_advanced_sort_string_tab(char **tab, int (*cmp)(char *, char *))
{
	int		i;
	int		j;
	int		length;
	char	*tmp;

	length = 0;
	while (tab[length])
		length++;
	i = 0;
	while (i < length)
	{
		j = 0;
		while (j < (length - i) - 1)
		{
			if (cmp(tab[j], tab[j + 1]) > 0)
			{
				tmp = tab[j + 1];
				tab[j + 1] = tab[j];
				tab[j] = tmp;
			}
			j++;
		}
		i++;
	}
}

/*#include <stdio.h>

int     ft_strlen(char *str)
{
      	int             i;

        i = 0;
        while (str[i])
                i++;
        return (i);
}

int     cmp(char *s1, char *s2)
{
        int     i;

        i = 0;
        while (i < ft_strlen(s1) || i < ft_strlen(s2))
        {
                if (s1[i] > s2[i])
                        return (s1[i] - s2[i]);
                if (s1[i] < s2[i])
                        return (s1[i] - s2[i]);
                i++;
	}
	return (0);
}

int     main(int argc, char **argv)
{
		int		i;

	ft_advanced_sort_string_tab(argv,&cmp);
	i = 0;
	while (++i < argc)
		printf("%s\n", argv[i]);
}*/
