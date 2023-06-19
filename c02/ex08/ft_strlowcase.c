/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-sa <gde-sa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 18:51:34 by gde-sa            #+#    #+#             */
/*   Updated: 2023/06/14 10:58:42 by gde-sa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int		cont;

	cont = 0;
	while (*str != '\0')
	{
		if ((*str >= 'A' && *str <= 'Z'))
		{
			*str += 32;
		}
		str++;
		cont++;
	}
	str -= cont;
	return (str);
}

/* #include <stdio.h>
int main(void)
{
	char str[] = "ABCDEFG";
	char str1[] = "AbCdeFg";
	printf("%s\n",ft_strlowcase(str));
	printf("%s\n",ft_strlowcase(str1));

	return (0);
} */
