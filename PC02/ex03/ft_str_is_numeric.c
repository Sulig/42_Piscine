/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadoming <sadoming@student.42barc...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 14:06:33 by sadoming          #+#    #+#             */
/*   Updated: 2023/02/23 16:16:06 by sadoming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int		counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		if (str[counter] > '9' || str[counter] < '0')
			return (0);
		counter++;
	}
	return (1);
}
/*
#include <stdio.h>

int main(void)
{
	int		check;
	char	*str;
	
	str = "/";
	check = ft_str_is_numeric(str);
	printf("check: %d\n", check);
	return (0);
}
*/
