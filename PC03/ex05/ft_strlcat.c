/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadoming <sadoming@student.42barc...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 18:43:24 by sadoming          #+#    #+#             */
/*   Updated: 2023/03/01 17:00:19 by sadoming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_counter(char *src)
{
	unsigned int	counter;

	counter = 0;
	while (src[counter] != 0)
		counter++;
	return (counter);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	length;
	unsigned int	total;
	unsigned int	counter;

	counter = 0;
	length = ft_counter(dest);
	total = ft_counter(src);
	if (size == 0 || size <= length)
		return (total + size);
	size--;
	total += length;
	while (length < size && src[counter] != '\0')
	{
		dest[length] = src[counter];
		counter++;
		length++;
	}
	dest[length] = '\0';
	return (total);
}
/*
#include <stdio.h>
#include <string.h>

int main(void)
{
	unsigned int	size;
	unsigned int	rstr;
	unsigned int	myr;
	char			st1[30] = "*UNDERTALE: ";
	char			st3[30] = "*UNDERTALE: ";
	char			*st2;

	size = 30;
	st2 = "Megalovania";

	printf("Mine: ");
	myr = ft_strlcat(st1, st2, size);
	printf("%d, %s\n", myr, st1);

	printf("Original: ");
	rstr = strlcat(st3, st2, size);
	printf("%d, %s\n", rstr, st3);

}
*/
