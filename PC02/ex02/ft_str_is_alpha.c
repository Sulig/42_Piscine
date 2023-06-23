/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadoming <sadoming@student.42barc...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 12:44:48 by sadoming          #+#    #+#             */
/*   Updated: 2023/02/23 16:15:30 by sadoming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int		counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		if (str[counter] < 'A')
			return (0);
		if (str[counter] > 'z')
			return (0);
		if (str[counter] > 'Z' && str[counter] < 'a')
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
	
	str = "sas[]";
	check = ft_str_is_alpha(str);
	printf("check: %d\n", check);
	return (0);
}
*/
