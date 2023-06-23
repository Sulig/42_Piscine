/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadoming <sadoming@student.42barc...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 16:54:23 by sadoming          #+#    #+#             */
/*   Updated: 2023/02/28 12:46:38 by sadoming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int		destl;
	int		length;

	destl = 0;
	length = 0;
	while (dest[destl] != '\0')
		destl++;
	while (src[length] != '\0')
	{
		dest[destl] = src[length];
		length++;
		destl++;
	}
	dest[destl] = '\0';
	return (dest);
}
/*
#include <unistd.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
	char	st1[30] = "ahora vas";
	char	st3[30] = "ahora vas";
	char	*st2;
	int		i;
	int		max;

	st2 = " y lo cascas";
	ft_strcat(st1, st2);
	i = 0;
	max = 31;
	while (i < max)
	{
		write(1, &st1[i], 1);
		i++;
	}
	write(1, "\n", 1);
	strcat(st3, st2);
	i = 0;
	while (i < max)
	{
		printf("%c", st3[i]);
		i++;
	}
	write(1, "\n", 1);
}
*/
