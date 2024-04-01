/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_parser.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athill <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 16:53:55 by athill            #+#    #+#             */
/*   Updated: 2023/12/02 17:16:01 by athill           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str);

int	space_killer(char *str, char *dest)
{
	int	i;
	int	j;
	int	*size;

	i = 0;
	j = 0;
	size = 0;
	while (str[i] != '\0')
	{
		if (str[i] == ' ')
		{
			i++;
		}
		else
		{
			dest[j] = str[i];
			i++;
			j++;
		}
	}
	dest[j] = '\0';
	return (j);
}

int	**input_init(char *str, int size)
{
	int	**input;
	int	i;
	int	j;
	int	str_count;

	input = malloc(sizeof(int *) * 4);
	i = 0;
	str_count = 0;
	while (i < 4)
	{
		input[i] = malloc(sizeof(int) * size);
		j = 0;
		while (j < size)
		{
			input[i][j] = str[str_count] - '0';
			str_count++;
			j++;
		}
		i++;
	}
	return (input);
}

int	parse_input(char *str, int ***input)
{
	char	*dest;
	int		size;

	dest = malloc(sizeof(char) * (ft_strlen(str) + 1));
	size = space_killer(str, dest) / 4;
	*input = input_init(dest, size);
	return (size);
}
