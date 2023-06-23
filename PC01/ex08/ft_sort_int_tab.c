/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadoming <sadoming@student.42barc...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 15:26:16 by sadoming          #+#    #+#             */
/*   Updated: 2023/02/22 18:12:51 by sadoming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int		temp;
	int		counter;
	int		length;

	length = 0;
	temp = 0;
	while (length < size)
	{
		counter = length;
		while (counter < size)
		{
			if (tab[length] > tab[counter])
			{
				temp = tab[counter];
				tab[counter] = tab[length];
				tab[length] = temp;
			}
			counter++;
		}
		length++;
	}
}
/*
int	main(void)
{
	int		size;
	int		length;
	int 	*tab;
	int		arr[6] = {60, 234, 43, 76, 2, 6};

	length = 0;
	size = 6;
	tab = &arr[0];
	while (length < size)
	{
		
		length++;
	}
	ft_sort_int_tab(tab, length);
	length = 0;
	while (length < size)
	{
		
		length++;
	}
	return (0);
}
*/
