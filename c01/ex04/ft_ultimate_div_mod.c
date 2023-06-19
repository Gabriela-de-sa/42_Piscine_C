/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-sa <gde-sa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 16:59:01 by gde-sa            #+#    #+#             */
/*   Updated: 2023/06/08 13:25:05 by gde-sa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int		temp;

	temp = *a;
	*a = *a / *b;
	*b = temp % *b;
}

/*int	main(void)
{
	int		c;
	int		d;

	c = 10;
	d = 3;

	ft_ultimate_div_mod(&c, &d);
	printf("%d %d", c , d)
}*/

/*
temp guarda o valor original de a.
quando *a recebe o resultado da divsao, o valor de a é alterado e
mudaria o resultado do resto.
*/