/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadoming <sadoming@student.42barc...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 17:10:14 by sadoming          #+#    #+#             */
/*   Updated: 2023/02/23 20:07:59 by sadoming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int		counter;

	counter = 0;
	while (src[counter] != '\0')
	{
		dest[counter] = src[counter];
		counter++;
	}
	dest[counter] = '\0';
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>

int main(void)
{
	char	st1[42] = "---------------";
	char	st3[42] = "---------------";
	char	st2[42] = "mybodyisready";
	char	*ptr1;
	char	*ptr2;

	ptr1 = &st1[0];
	ptr2 = &st2[0];
	printf("st1 after: %s\n", st1);
	ptr1 = ft_strcpy(ptr1, ptr2);
	printf("st1 now: %s\n", ptr1);
	strcpy(st3, st2);
	printf("st3 now: %s\n", st3);
}
*/
