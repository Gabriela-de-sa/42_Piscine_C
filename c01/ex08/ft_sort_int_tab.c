/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-sa <gde-sa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 18:30:09 by gde-sa            #+#    #+#             */
/*   Updated: 2023/06/11 13:29:57 by gde-sa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size - i - 1)
		{
			if (tab[j] > tab[j + 1])
			{
				temp = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = temp;
			}
			j++;
		}
		i++;
	}
}

int	main(void)
{
	int	a[5] = {-100, 50, 75, 100, 25};
	int	i;

	i = 0;
	while (i < 5)
	{
		printf(" %d", a[i]);
		i++;
	}
	ft_sort_int_tab(a, 5);
	printf("\n");
	i = 0;
	while (i < 5)
	{
		printf(" %d", a[i]);
		i++;
	}
}
