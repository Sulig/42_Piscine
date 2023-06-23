/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadoming <sadoming@student.42barc...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 18:25:50 by sadoming          #+#    #+#             */
/*   Updated: 2023/03/01 18:38:58 by sadoming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	int		n;
	char	out;

	n = 0;
	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else
	{
		if (nb < 0)
		{
			write(1, "-", 1);
			nb *= -1;
		}
		n = nb;
		if (n > 9)
		{
			ft_putnbr(nb / 10);
			n %= 10;
		}
		out = n + '0';
		write(1, &out, 1);
	}
}
/*
int main()
{
	int		num;

	num = -214783648;
	ft_putnbr(num);
}
*/
