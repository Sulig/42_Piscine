/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadoming <sadoming@student.42barc...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 16:25:19 by sadoming          #+#    #+#             */
/*   Updated: 2023/02/23 16:32:15 by sadoming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int		counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		if (str[counter] < 'a' || str[counter] > 'z')
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

	str = "ssh";
	check = ft_str_is_lowercase(str);
	printf("check: %d\n", check);
}
*/
