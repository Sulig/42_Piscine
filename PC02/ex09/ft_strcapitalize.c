/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadoming <sadoming@student.42barc...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 11:33:48 by sadoming          #+#    #+#             */
/*   Updated: 2023/02/26 17:38:50 by sadoming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_cap(char c)
{
	if (c > '/' && c < ':')
		return (1);
	if (c > '@' && c < '[')
		return (1);
	return (0);
}

int	ft_is_alphanumeric(char c)
{
	if (c < '0')
		return (0);
	if (c > 'z')
		return (0);
	if (c > '9' && c < 'A')
		return (0);
	if (c > 'Z' && c < 'a')
		return (0);
	return (1);
}

char	*ft_no_cap_behind(char *str)
{
	int		cap;
	int		counter;
	int		other;

	counter = 0;
	while (str[counter] != '\0')
	{
		cap = ft_is_cap(str[counter]);
		other = ft_is_alphanumeric(str[counter]);
		while (other == 1 && cap == 1 && str[counter + 1] != '\0')
		{
			counter++;
			if (other == 1 && (str[counter] > '@' && str[counter] < '['))
				str[counter] += 32;
			if (str[counter + 1] != '\0')
				cap = ft_is_cap(str[counter + 1]);
			other = ft_is_alphanumeric(str[counter]);
		}
		counter++;
	}
	return (str);
}

char	*ft_capitalize(char *str)
{
	int		other;
	int		cap;
	int		converted;
	int		counter;

	counter = 0;
	converted = 0;
	while (str[counter] != '\0')
	{
		cap = ft_is_cap(str[counter]);
		other = ft_is_alphanumeric(str[counter]);
		if (other == 0)
			converted = 0;
		if (str[counter] > '/' && str[counter] < ':')
			converted++;
		if (converted == 0 || (cap == 0 && other == 1))
		{
			if (str[counter] > '`' && str[counter] < '{')
				str[counter] -= 32;
			converted++;
		}
		counter++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	str = ft_capitalize(str);
	str = ft_no_cap_behind(str);
	return (str);
}
/*
#include <stdio.h>

int     main(void)
{
        char    str[] = "mNNNN 878NN nj89nj89NJ9h O.M.O 5:qu/arante-deux777777";

        printf("str before: %s\n", str);
        ft_strcapitalize(str);
        printf("str now: %s\n", str);
}
*/