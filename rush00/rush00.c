/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-sa <gde-sa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 14:32:28 by tbohn-co          #+#    #+#             */
/*   Updated: 2023/05/28 16:32:30 by gde-sa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char a);

void	rush02(int x, int y)
{
	int	line;
	int	column;

	line = 1;
	column = 1;
	while (line <= y)
	{
		column = 1;
		while (column <= x)
		{
			if (line == 1 && (column == 1 || column == x))
				ft_putchar('A');
			else if (line == y && (column == 1 || column == x))
				ft_putchar('C');
			else if (column == 1 || column == x)
				ft_putchar('B');
			else if (line == 1 || line == y)
				ft_putchar('B');
			else
				ft_putchar(' ');
			column++;
		}
		ft_putchar('\n');
		line++;
	}
}
