/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadoming <sadoming@student.42barc...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 20:11:57 by sadoming          #+#    #+#             */
/*   Updated: 2023/02/28 12:59:46 by sadoming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	destl;
	unsigned int	length;
	unsigned int	counter;

	destl = 0;
	length = 0;
	counter = 0;
	while (dest[destl] != '\0')
		destl++;
	while (counter < nb && src[length] != '\0')
	{
		dest[destl] = src[length];
		length++;
		destl++;
		counter++;
	}
	dest[destl] = '\0';
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>

int main(void)
{
	unsigned int	nb;
	int				i;
	int				max;
	char			st1[30] = "Ahora vas";
	char			st3[30] = "Ahora vas";
	char			*st2;
	
	nb = 0;
	st2 = " y lo cascas!!";
	i = 0;
	max = 31;
	
	printf("mine: ");
	ft_strncat(st1, st2, nb);
	while (i < max)
	{
		printf("%c", st1[i]);
		i++;
	}
	i = 0;
	printf("\nstrncat: ");
	strncat(st3, st2, nb);
	while (i < max)
	{
		printf("%c", st3[i]);
		i++;
	}
}
*/
