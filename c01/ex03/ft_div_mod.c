/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-sa <gde-sa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 19:19:35 by gde-sa            #+#    #+#             */
/*   Updated: 2023/06/07 15:15:21 by gde-sa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*int	main(void)
{
	int		a;
	int		b;
	int		c;
	int		d;

	a = 10;
	b = 3;
	ft_div_mod(a, b, &c, &d);
	printf("divisao: %d\n", c);
	printf("resto divisao: %d", d);
}*/
