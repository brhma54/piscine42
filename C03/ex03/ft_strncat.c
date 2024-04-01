/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeandel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 16:04:41 by ajeandel          #+#    #+#             */
/*   Updated: 2023/11/27 12:52:06 by ajeandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	j;
	unsigned int	i;

	j = 0;
	i = 0;
	while (dest[j])
		j++;
	while (src[i] && i < nb)
	{
		dest[i + j] = src[i];
		i++;
	}
	dest[i + j] = '\0';
	return (dest);
}
/*int main ()
{
  char str[80]="zzzzzzzzzzzzzzzzzzzzzzzz";
  ft_strncat(str,"these is a test widjiwjdiajiawfha", 15);
  printf("%s",str);
  return 0;
}*/
