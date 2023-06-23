/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadoming <sadoming@student.42barc...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 12:03:51 by sadoming          #+#    #+#             */
/*   Updated: 2023/02/22 18:09:57 by sadoming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int		temp;
	int		length;

	length = 0;
	temp = 0;
	while (length < size / 2)
	{
		--size;
		temp = tab[size];
		tab[size] = tab[length];
		tab[length] = temp;
		length++;
	}
}
/*
int	main(void)
{
	int		length;
	int		size;
	int		*tab;
	int		arr[11];

	size = 0;
	length = 0;
	while (size < 11)
	{
		arr[size] = size;
		size++;
	}
	tab = &arr[0];
	while (length < 11)
	{
		
		length++;
	}
	ft_rev_int_tab(tab, size);
	length = 0;
	while (length < size)
	{
		
		length++;
	}
}
*/
