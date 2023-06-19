/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfabiana <lfabiana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 10:54:50 by gde-sa            #+#    #+#             */
/*   Updated: 2023/06/13 17:20:56 by lfabiana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_islower(char c)
{
	return (c >= 'a' && c <= 'z');
}

int	ft_isupper(char c)
{
	return (c >= 'A' && c <= 'Z');
}

int	ft_isnumeric(char c)
{
	return (c >= '0' && c <= '9');
}

char	*ft_strcapitalize(char *str)
{
	int		capitalize;
	int		index;

	capitalize = 1;
	index = 0;
	while (str[index] != '\0')
	{
		if (capitalize && ft_islower(str[index]))
		{
			str[index] = str[index] - 32;
			capitalize = 0;
		}
		else if (!capitalize && ft_isupper(str[index]))
		{
			str[index] = str[index] + 32;
			capitalize = 0;
		}
		else if (!ft_islower(str[index]) && \
		!ft_isupper(str[index]) && !ft_isnumeric(str[index]))
			capitalize = 1;
		else
			capitalize = 0;
		index++;
	}
	return (str);
}

#include <stdio.h>

int	main(void)
{
	char	string[] = "salut, comment tu vas ? 42mots quarante-deux";

	printf("%s", ft_strcapitalize(string));
	return (0);
}
