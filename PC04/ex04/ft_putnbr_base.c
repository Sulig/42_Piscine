/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadoming <sadoming@student.42barc...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 17:36:58 by sadoming          #+#    #+#             */
/*   Updated: 2023/03/02 18:00:34 by sadoming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_hex_base(int nbr)
{
	char    *hex;
	
	hex = "0123456789abcdef";
	write(1, &hex[nbr / 16], 1);
    write(1, &hex[nbr % 16], 1);
}

void	ft_bin_base(int nbr)
{
	char	bin;

	while (nbr > 1)
		nbr /= 2;
	bin = nbr + '0';
	write(1, &bin, 1);
}

int ft_error_base(char *base)
{
	int		counter;
	int		length;

	counter = 0;
	if (base[0] == '\0')
		return (0);
	while (base[counter] != '\0')
	{
		if (base[counter] == '-' || base[counter] == '+')
			return (0);
		counter++;
	}
	while (base[counter] != '\0')
	{
		length = counter + 1;
		while (base[length] != '\0')
		{
			if (base[counter] == base[length])
				return (0);
		}
		counter++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	char	*hex;
	char	*hex2;
	char	*bin;
	char	*octal;

	hex = "0123456789abcdef";
	hex2 = "0123456789ABC";
	bin = "";
	octal = "";
	if (ft_error_base(base) == 1)
	{
	
	
	}
}
