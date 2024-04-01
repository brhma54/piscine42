/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valgrant <valgrant@student.42luxembou      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 17:35:49 by valgrant          #+#    #+#             */
/*   Updated: 2023/12/03 16:54:28 by athill           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_format(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] == ' ' || (str[i] >= '0' && str[i] <= '9')))
			return (0);
		i++;
	}
	return (1);
}

int	check_input(char *str)
{
	int	i;
	int	ic;
	int	check_space;

	ic = 0;
	i = 0;
	check_space = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			ic = ic + 1;
			if (str[i + 1] == ' ')
				check_space++;
		}
		i++;
	}
	if (ic % 4 != 0 || ic > 36 || ic < 4 || ic != check_space + 1)
		return (0);
	return (1);
}
