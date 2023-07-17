/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-sa <gde-sa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 13:16:26 by gde-sa            #+#    #+#             */
/*   Updated: 2023/07/17 13:03:04 by gde-sa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int		i;

	i = 0;
	while (s1[i] == s2[i])
	{
		if (s1[i] == '\0' && s2[i] == '\0')
		{
			return (0);
		}
		i++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

// #include <stdio.h>
// #include <string.h>
// #include <unistd.h>

// int main(void)
// {
// 	char	a[] = "gabi";
// 	char	b[] = "gab";
// 	char	c[] = "gabi";
// 	char	d[] = "gab";

// 	printf("%d",ft_strcmp(a, b));
// 	printf("\n%d",strcmp(c, d));
// }
