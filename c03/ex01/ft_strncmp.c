/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-sa <gde-sa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 14:05:08 by gde-sa            #+#    #+#             */
/*   Updated: 2023/06/14 18:29:22 by gde-sa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n <= 0)
	{
		return (0);
	}
	while (s1[i] == s2[i] && (s1[i] != '\0' || s2[i] != '\0') && i < n - 1)
	{
		i++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

/* #include <stdio.h>
#include <string.h>
int main(void)
{
	char *s1 = "Hello World";
	char *s2 = "Hello";
	printf("%d", ft_strncmp(s1, s2, 7));
	printf("\n%d", strncmp(s1, s2, 7)); 
} */
