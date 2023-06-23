/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadoming <sadoming@student.42barc...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 14:51:49 by sadoming          #+#    #+#             */
/*   Updated: 2023/02/27 19:57:01 by sadoming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	counter;
	int				ascii;

	ascii = 0;
	counter = 0;
	if (n > 0)
	{
		n--;
		while (counter < n && (s1[counter] == s2[counter]))
			counter++;
		ascii = s1[counter] - s2[counter];
	}
	return (ascii);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	unsigned int	n;
	int				diference;
	int				strncmpi;
	char			*st1;
	char			*st2;

	n = 7;
	st1 = "iabbafds";
	st2 = "aabbafgs";
	strncmpi = strncmp(st1, st2, n);
	diference = ft_strncmp(st1, st2, n);
	printf("strncmp: %d\n", strncmpi);
	printf("diference: %d\n", diference);
}
*/
