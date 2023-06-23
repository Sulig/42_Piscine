/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadoming <sadoming@student.42barc...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 19:44:34 by sadoming          #+#    #+#             */
/*   Updated: 2023/02/22 17:54:48 by sadoming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int		div;
	int		mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}
/*
int		main(void)
{
	int		a;
	int		b;
	int		*div;
	int		*mod;

	a = 15;
	b = 3;
	div = &a;
	mod = &b;
	ft_ultimate_div_mod(div, mod);
}
*/
