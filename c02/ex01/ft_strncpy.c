/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-sa <gde-sa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 12:49:37 by gde-sa            #+#    #+#             */
/*   Updated: 2023/06/13 12:31:38 by gde-sa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

/* int main(void)
{
	char dest[] = "ghngmgmh";
	char src[] = "banana";
	char dest2[] = "ghngmgmh";

	strncpy(dest2, src, 3);
	ft_strncpy(dest, src, 3);
	printf("%s", dest2);
	printf("\n\n");
	printf("%s", dest);
} */
