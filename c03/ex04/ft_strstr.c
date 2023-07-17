/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-sa <gde-sa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 15:33:04 by gde-sa            #+#    #+#             */
/*   Updated: 2023/06/14 18:36:34 by gde-sa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		con2;

	if (*to_find == '\0')
	{
		return (str);
	}
	i = 0;
	while (str[i] != '\0')
	{
		con2 = 0;
		while (str[i] == to_find[con2])
		{
			i++;
			con2++;
			if (to_find[con2] == '\0')
			{
				return (&str[i - con2]);
			}
		}
		i++;
	}
	return (0);
}

/* #include <stdio.h>
#include <string.h>
int main(void)
{
	char str[] = "Preciso encontrar uma palavra dessa frase";
	char to_find[] = "palavra";
	char str1[] = "Preciso encontrar uma palavra dessa frase";
	char to_find1[] = "palavra";

	printf("%s", ft_strstr(str, to_find));
	printf("\n%s", strstr(str1, to_find1));
	return (0);
} */
