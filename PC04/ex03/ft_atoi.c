/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadoming <sadoming@student.42barc...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 18:40:55 by sadoming          #+#    #+#             */
/*   Updated: 2023/03/02 17:34:30 by sadoming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int		counter;
	int		sign;
	int		find;

	find = 0;
	counter = 0;
	sign = 1;
	while (str[counter] < 33)
		counter++;
	while (str[counter] == '-' || str[counter] == '+')
	{
		if (str[counter] == '-')
			sign *= -1;
		counter++;
	}
	while (str[counter] >= '0' && str[counter] <= '9')
	{
		find *= 10;
		find += str[counter] - '0';
		counter++;
	}
	return (find * sign);
}
/*
#include <stdio.h>

int main()
{
	char	*str;

	str = "     \n\t\200-+-+-+--2\n32asc3";
	printf("%d\n", ft_atoi(str));
}
*/
