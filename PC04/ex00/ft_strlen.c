/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadoming <sadoming@student.42barc...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 18:15:53 by sadoming          #+#    #+#             */
/*   Updated: 2023/03/01 18:21:11 by sadoming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int		counter;

	counter = 0;
	while (str[counter] != '\0')
		counter++;
	return (counter);
}
/*
#include <stdio.h>

int main(void)
{
	char	*str;
	int		len;

	str = "ahssgdh";
	len = ft_strlen(str);
	printf("len: %d\n", len);
}
*/
