/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadoming <sadoming@student.42barc...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 13:17:31 by sadoming          #+#    #+#             */
/*   Updated: 2023/02/21 18:57:50 by sadoming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	int		n;

	n = nb;
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		n %= 10;
	}
	ft_print(n + '0');
}

void	ft_print_comb_more(int max)
{
	int		a;
	int		b;
	int		d;
	char	c;

	a = 0;
	c = 0;
	while (a <= max)
	{
		b = a + 1;
		if (b < 10)
			ft_putnbr(c);
		if (b % 10 == 0 || b % 11 == 0)
			a = b;
		else
		{
			ft_putnbr(b);
			if (b < max)
				write(1, ", ", 2);
			a = b;
		}
	}
}

void	ft_print_combn(int n)
{
	if (n > 0 && n < 10)
	{
		if (n == 1)
			ft_print_comb_more(9);
		if (n == 2)
			ft_print_comb_more(89);
		if (n == 3)
			ft_print_comb_more(789);
	}
}
