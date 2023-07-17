/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-sa <gde-sa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 11:15:07 by gde-sa            #+#    #+#             */
/*   Updated: 2023/06/14 18:31:13 by gde-sa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

/* #include <string.h>
#include <stdio.h>
int	main(void)
{
	char	src[20] = "Hello";
	char	dest[20] = "Wo";
	char	src1[20] = "Hello";
	char	dest1[20] = "Wo";
	printf("%s", ft_strcat(dest, src));
	printf("\n%s", strcat(dest1, src1));
	return (0);
} */