/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-sa <gde-sa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 17:11:14 by gde-sa            #+#    #+#             */
/*   Updated: 2023/06/14 11:00:41 by gde-sa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int		cont;

	cont = 0;
	while (*str != '\0')
	{
		if ((*str >= 'a' && *str <= 'z'))
		{
			*str -= 32;
		}
		str++;
		cont++;
	}
	str -= cont;
	return (str);
}

// #include <stdio.h>
// int main(void)
// {
//     char str[] = "abcdefg";
//     char str1[] = "AbCdeFg";
//     printf("%s\n",ft_strupcase(str));
//     printf("%s\n",ft_strupcase(str1));

//     return (0);
// }
