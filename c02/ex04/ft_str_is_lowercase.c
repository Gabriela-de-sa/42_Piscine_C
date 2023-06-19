/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-sa <gde-sa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 16:06:45 by gde-sa            #+#    #+#             */
/*   Updated: 2023/06/12 18:02:11 by gde-sa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	while (*str != '\0')
	{
		if (!((*str >= 'a') && (*str <= 'z')))
		{
			return (0);
		}
		str++;
	}
	return (1);
}

/* int	main(int argc, char **argv)
{
	char	c[] = "gabi";

	ft_str_is_lowercase(c);
} */
