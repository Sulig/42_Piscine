/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadoming <sadoming@student.42barc...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 12:03:31 by sadoming          #+#    #+#             */
/*   Updated: 2023/02/23 16:14:37 by sadoming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	counter;

	counter = 0;
	while (counter < n && (src[counter] != '\0' || dest[counter] != '\0'))
	{
		dest[counter] = src[counter];
		counter++;
	}
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char			st1[42] = "-----";
	char			st2[42] = "mybodyisready";
	char			st3[42] = "-----";
	char			*pt1;
	char			*pt2;
	unsigned int	n;

	n = -10;
	printf("n: %d\n", n);
	pt1 = &st1[0];
	pt2 = &st2[0];
	printf("st1 after: %s\n", pt1);
	strncpy(st3, st2, n);
	printf("st3 now: %s\n", st3);
	pt1 = ft_strncpy(pt1, pt2, n);
	printf("st1 now: %s\n", pt1);
}
*/
