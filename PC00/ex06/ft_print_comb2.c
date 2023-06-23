/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadoming <sadoming@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 17:37:10 by sadoming          #+#    #+#             */
/*   Updated: 2023/02/21 19:05:32 by sadoming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print(int in, char op)
{
	char	c;
	int		res;

	if (op == '%' || in == 0)
	{
		res = in % 10;
		c = res + '0';
		write(1, &c, 1);
	}
	if (op == '/' && in != 0)
	{
		res = in / 10;
		c = res + '0';
		write(1, &c, 1);
	}
}

void	ft_print_comb2(void)
{
	int		a;
	int		b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_print(a, '/');
			ft_print(a, '%');
			write(1, " ", 1);
			ft_print(b, '/');
			ft_print(b, '%');
			if (!(a == 98 && b == 99))
				write(1, ", ", 2);
			b++;
		}
		a++;
	}
}
