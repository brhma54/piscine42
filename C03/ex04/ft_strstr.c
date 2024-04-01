/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeandel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 16:15:13 by ajeandel          #+#    #+#             */
/*   Updated: 2023/11/27 17:27:09 by ajeandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <bsd/string.h>

int	ft_strlen(char *str)
{
	char	c;
	int		x;

	x = 0;
	c = str[x];
	while (c != '\0')
	{
		x++;
		c = str[x];
	}
	return (x);
}

int	check1(char *s, char *t)
{
	int	x;
	int	comp;

	x = 0;
	comp = 0;
	while (x < ft_strlen(t))
	{
		if (s[x] == t[x])
			comp++;
		x++;
	}
	if (comp == ft_strlen(t))
		return (1);
	else
		return (0);
}

int	indice(unsigned int i, unsigned int j, char *s, char *t)
{
	unsigned int	temp;

	temp = 0;
	if (s[j] == t[temp])
	{
		while (temp < i)
		{
			if (s[j + temp] == t[temp])
				temp++;
			else
				return (0);
		}
		if (temp == i)
			return (j);
	}
	return (0);
}

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int	i;
	unsigned int	j;

	i = ft_strlen(to_find);
	j = 0;
	if (check1(str, to_find) == 1)
		return (str);
	if (to_find[0] == 0)
		return (str);
	while (str[j] != 0)
	{
		if (indice(i, j, str, to_find) != 0)
			return (&str[indice(i, j, str, to_find)]);
		j++;
	}
	return (0);
}

/*int main ()
{
  char str[80]="abcdefghijklmnopqrstuvwxyz";
  printf("%s\n",ft_strstr(str,"klmnop"));
  printf("%s\n",ft_strstr(str,"k"));
  return 0;
}*/
