/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadoming <sadoming@student.42barc...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 20:54:36 by sadoming          #+#    #+#             */
/*   Updated: 2023/02/24 11:32:16 by sadoming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int		counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		if (str[counter] >= 'A' && str[counter] <= 'Z')
			str[counter] += 32;
		counter++;
	}
	return (str);
}
/*
#include <stdio.h>

int main(void)
{
	char	str[] = "SSASdSsn";
	printf("str before: %s\n", str);
	ft_strlowcase(str);
	printf("str now: %s\n", str);
}
*/
