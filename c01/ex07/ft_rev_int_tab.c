/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-sa <gde-sa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 11:24:13 by gde-sa            #+#    #+#             */
/*   Updated: 2023/06/11 13:42:06 by gde-sa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


void	ft_rev_int_tab(int *tab, int size)
{
	int		temp;
	int		i;

	i = 0;
	while (i < size)
	{
		temp = tab[i];
		tab[i] = tab[size - 1];
		tab[size - 1] = temp;
		i++;
		size--;
	}
}

#include <stdio.h>

int	main(void)
{
	int	a[4] = {25, 50, 75, 100};

	ft_rev_int_tab(&a, 4);
	int i = 0;
	while (i < 4)
	{
		printf("%d\n", a[i]);
		i++;
	}
}
