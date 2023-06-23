/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadoming <sadoming@student.42barc...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 11:39:47 by sadoming          #+#    #+#             */
/*   Updated: 2023/02/27 20:01:02 by sadoming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int		ascii;
	int		counter;

	ascii = 0;
	counter = 0;
	if (s1 == s2)
		return (ascii);
	while (s1[counter] == s2[counter])
	{
		counter++;
	}
	ascii = s1[counter] - s2[counter];
	return (ascii);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	int		strcmp_i;
	int		diference;
	char	*st1;
	char	*st2;

	st1 = "aabbac";
	st2 = "aabbafd";
	strcmp_i = strcmp(st1, st2);
	diference = ft_strcmp(st1, st2);
	printf("strcmp: %d\n", strcmp_i);
	printf("mine: %d\n", diference);
}
*/
