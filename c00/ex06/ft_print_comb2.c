/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-sa <gde-sa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 17:28:34 by gde-sa            #+#    #+#             */
/*   Updated: 2023/07/17 13:01:28 by gde-sa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_catchar(int i, int j);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (i < 100)
	{
		j = i + 1;
		while (j < 100)
		{
			ft_catchar(i, j);
			if ((i / 10 != 9) || (i % 10 != 8))
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			j++;
		}
		i++;
	}
}

void	ft_catchar(int i, int j)
{
	ft_putchar(i / 10 + '0');
	ft_putchar(i % 10 + '0');
	ft_putchar(' ');
	ft_putchar(j / 10 + '0');
	ft_putchar(j % 10 + '0');
}

// int	main(void)
// {
// 	ft_print_comb2();
// 	return (0);
// }
