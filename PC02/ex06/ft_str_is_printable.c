/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadoming <sadoming@student.42barc...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 16:41:37 by sadoming          #+#    #+#             */
/*   Updated: 2023/02/23 19:08:49 by sadoming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int		counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		if (str[counter] < ' ' || str[counter] > '~')
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

	str = "\nCmo!#$%&^()*+~`-_:;<>.,=?/@[]{}''";
	printf("str: %s\n", str);
	check = ft_str_is_printable(str);
	printf("check: %d\n", check);
}
*/
