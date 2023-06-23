/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadoming <sadoming@student.42barc...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 18:51:46 by sadoming          #+#    #+#             */
/*   Updated: 2023/02/22 17:53:17 by sadoming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int		main(void)
{
	int		a;
	int		b;
	int		divi;
	int		modi;
	int		*div;
	int		*mod;

	a = 15;
	b = 5;
	div = &divi;
	mod = &modi;
	ft_div_mod(a, b, div, mod);
}
*/
