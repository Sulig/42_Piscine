/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadoming <sadoming@student.42barc...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 13:03:53 by sadoming          #+#    #+#             */
/*   Updated: 2023/02/28 18:42:45 by sadoming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_find(char *str, char *to_find, int counter, int *save)
{
	int		length;

	length = 0;
	while (str[counter] != '\0')
	{
		if (str[counter] == to_find[length])
		{
			*save = counter;
			while (to_find[length + 1] != '\0')
			{
				length++;
				if (str[counter + 1] != '\0')
				{
					counter++;
					if (str[counter] != to_find[length])
						ft_find(str, to_find, counter, save);
				}
				else
					return (counter + 1);
			}
			return (*save);
		}
		counter++;
	}
	return (counter);
}

char	*ft_strstr(char *str, char *to_find)
{
	int		pos;
	int		*ptr;

	ptr = &pos;
	if (to_find[0] == '\0')
		return (str);
	*ptr = ft_find(str, to_find, 0, ptr);
	if (str[pos] == '\0')
		return (0);
	return (str + pos);
}
/*
#include <stdio.h>
#include <string.h>

int main(void)
{
	char	*str;
	char	*to_find;
	char	*str_r;
	char	*my_res;

	str = " friend friday";
	to_find = "friend fridayy";
	str_r = strstr(str, to_find);
	printf("strstr: %s\n", str_r);
	
	my_res = ft_strstr(str, to_find);
	printf("my: %s\n", my_res);
}
*/
