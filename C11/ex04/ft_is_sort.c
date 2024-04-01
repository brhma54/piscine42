/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehamm <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 15:40:47 by ehamm             #+#    #+#             */
/*   Updated: 2023/12/12 13:34:04 by ehamm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	k = 0;
	while (i < length - 1)
	{
		if (f(tab[i], tab[i + 1]) >= 0)
			j++;
		if (f(tab[i], tab[i + 1]) <= 0)
			k++;
		i++;
	}
	if (j == i || k == i)
		return (1);
	return (0);
}

/*int test_asc(int a, int b)
{
	return (a - b);
}

int	main(void)
{
	int tab[] = {5, 4, 3,2, 1};
	printf("=> %d\n", ft_is_sort(tab, 5, &test_asc));
}*/
