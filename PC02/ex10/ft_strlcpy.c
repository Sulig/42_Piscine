/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadoming <sadoming@student.42barc...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 17:56:28 by sadoming          #+#    #+#             */
/*   Updated: 2023/02/26 19:11:04 by sadoming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	length;
	unsigned int	counter;
	unsigned int	destlen;

	length = 0;
	counter = 0;
	destlen = 0;
	while (src[length] != '\0')
	{
		length++;
	}
	while (dest[destlen] != '\0')
	{
		destlen++;
	}
	while (destlen -1 > size && counter < size -1)
	{
		dest[counter] = src[counter];
		counter++;
	}
	dest[counter] = '\0';
	return (length);
}
/*
#include <stdio.h>
#include <string.h>

int main(void)
{
	char	*str;
	char	stcp[42];
	char	dest[42];
	int		sti;
	int		desti;

	str = "My body is ready";
	
	sti = strlcpy(stcp, str, 17);
	printf("num: %d, stcp: %s\n", sti, stcp);
	
	desti = ft_strlcpy(dest, str, 17);
	printf("my num: %d, dest: %s\n", desti, dest);
}
*/
