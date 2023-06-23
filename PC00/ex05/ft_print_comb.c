/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadoming <sadoming@student.42barc...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 16:25:14 by sadoming          #+#    #+#             */
/*   Updated: 2023/02/21 19:08:52 by sadoming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_char(int a, int b, int c)
{
	char	nums;

	nums = a + '0';
	write(1, &nums, 1);
	nums = b + '0';
	write(1, &nums, 1);
	nums = c + '0';
	write(1, &nums, 1);
}

void	ft_print_comb(void)
{
	int		a;
	int		b;
	int		c;

	a = 0;
	while (a <= 7)
	{
		b = a + 1;
		while (b <= 8)
		{
			c = b + 1;
			while (c <= 9)
			{
				ft_char(a, b, c);
				if (a != 7 || b != 8 || c != 9)
					write(1, ", ", 2);
				c++;
			}
			b++;
		}
		a++;
	}
}
