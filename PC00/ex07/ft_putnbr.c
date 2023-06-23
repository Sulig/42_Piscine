/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadoming <sadoming@student.42barc...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 15:40:25 by sadoming          #+#    #+#             */
/*   Updated: 2023/02/21 19:09:39 by sadoming         ###   ########.fr       */
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

	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else
	{
		if (nb < 0)
		{
			ft_print('-');
			nb *= -1;
			n = nb;
		}
		else
			n = nb;
		if (nb > 9)
		{
			ft_putnbr(nb / 10);
			n %= 10;
		}
		ft_print(n + '0');
	}
}
