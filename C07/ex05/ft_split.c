/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeandel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 09:43:34 by ajeandel          #+#    #+#             */
/*   Updated: 2023/12/07 16:25:11 by ajeandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int	issep(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	if (c == '\0')
		return (1);
	return (0);
}

int	nbr_mot(char *str, char *charset)
{
	int	i;
	int	compteur;

	i = 0;
	compteur = 0;
	while (str[i])
	{
		if (issep(str[i], charset) == 0 && issep(str[i + 1], charset) == 1)
			compteur++;
		i++;
	}
	return (compteur);
}

void	copy_mot(char *dest, char *src, char *charset)
{
	int	i;

	i = 0;
	while (issep(src[i], charset) == 0)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
}

void	split_cpy(char *str, char *charset, char **res)
{
	int	i;
	int	j;
	int	pos;

	i = 0;
	pos = 0;
	while (str[i])
	{
		if (issep(str[i], charset) == 1)
			i++;
		else
		{
			j = 0;
			while (issep(str[i + j], charset) == 0)
				j++;
			res[pos] = (char *)malloc(sizeof(char) * (j + 1));
			copy_mot(res[pos], str + i, charset);
			i = i + j;
			pos++;
		}
	}
}

char	**ft_split(char *str, char *charset)
{
	char	**res;
	int		mots;

	mots = nbr_mot(str, charset);
	res = (char **)malloc(sizeof(char *) * (mots + 1));
	split_cpy(str, charset, res);
	res[mots] = 0;
	return (res);
}

/*int main(void)
{
	char str[] = "Je suis un,test";
	char **tab;
	char charset[] = " ,";
	printf("%d\n", nbr_mot(str, &charset[0]));
	tab = ft_split(str, charset);
	printf("after changes : %s\n ---------------------\n", str);
	int i = 0;
	while (tab[i] != 0)
	{
		printf("%s\n", tab[i]);
		i++;
	}
}*/
