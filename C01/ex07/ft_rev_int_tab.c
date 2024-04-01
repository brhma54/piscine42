/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeandel <ajeandel@student.42luxembourg.lu>+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 19:33:45 by ajeandel          #+#    #+#             */
/*   Updated: 2023/11/23 14:19:38 by ajeandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_rev_int_tab(int *tab, int size)
{
	int		i;
	int		j;
	int		tmp;

	i = 0;
	j = size - 1;
	tmp = 0;
	while (i < size)
	{
		if (i < size / 2)
		{
			tmp = tab[i];
			tab[i] = tab[j];
			tab[j] = tmp;
		}
		j--;
		i++;
	}
}
/*int main()
{
        int test[5] = {1, 2, 7, 4, 5};

        ft_rev_int_tab(test, 5);

        for(int i = 0; i < 5; i++)
        {
                printf("%d,", test[i]);
        }
        return 0;
}*/
