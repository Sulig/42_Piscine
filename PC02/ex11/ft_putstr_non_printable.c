/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadoming <sadoming@student.42barc...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 19:13:30 by sadoming          #+#    #+#             */
/*   Updated: 2023/02/27 12:17:54 by sadoming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_non_printable(char *str)
{
	char	*hex;
	int		counter;

	counter = 0;
	hex = "0123456789abcdef";
	while (str[counter] != '\0')
	{
		if (!(str[counter] > 31 && str[counter] < 127))
		{
			write(1, "\\", 1);
			write(1, &hex[str[counter] / 16], 1);
			write(1, &hex[str[counter] % 16], 1);
		}
		else
			write(1, &str[counter], 1);
		counter++;
	}
}
/*
int	main(void)
{
	char	*str;

	str = "ff\nff\200ff";
	ft_putstr_non_printable(str);
}
*/
