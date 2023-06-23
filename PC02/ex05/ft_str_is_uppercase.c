/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadoming <sadoming@student.42barc...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 16:34:26 by sadoming          #+#    #+#             */
/*   Updated: 2023/02/23 16:38:53 by sadoming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int		counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		if (str[counter] < 'A' || str[counter] > 'Z')
			return (0);
		counter++;
	}
	return (1);
}
/*
#include <stdio.h>

int main(void)
{
	int 	check;
	char	*str;

	str = "ZZsa";
	check = ft_str_is_uppercase(str);
	printf("check: %d\n", check);
}
*/
