/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadoming <sadoming@student.42barc...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 19:10:51 by sadoming          #+#    #+#             */
/*   Updated: 2023/02/23 20:53:14 by sadoming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int		counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		if (str[counter] >= 'a' && str[counter] <= 'z')
			str[counter] -= 32;
		counter++;
	}
	return (str);
}
/*
#include <stdio.h>

int main(void)
{
	char	str[] = "iasdSsn";
	printf("str before: %s\n", str);
	ft_strupcase(str);
	printf("str now: %s\n", str);
}
*/
