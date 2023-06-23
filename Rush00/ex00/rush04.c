/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofallouk <ofallouk@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 17:08:23 by ofallouk          #+#    #+#             */
/*   Updated: 2023/02/18 19:01:36 by sadoming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	draw_line(int length, char a, char b, char c)
{
	int	g_count_col;

	g_count_col = 1;
	if (length > 0)
	{
		while (g_count_col <= length)
		{
			if (g_count_col == 1)
			{
				ft_putchar(a);
			}
			else if (g_count_col == length)
			{
				ft_putchar(c);
			}
			else
			{
				ft_putchar(b);
			}
			++ g_count_col;
		}
		ft_putchar('\n');
	}	
}

void	rush(int x, int y)
{
	int	g_count_rows;

	g_count_rows = 1;
	while (g_count_rows <= y)
	{
		if (g_count_rows == 1)
			draw_line(x, 'A', 'B', 'C');
		else if (g_count_rows == y)
			draw_line(x, 'C', 'B', 'A');
		else
			draw_line(x, 'B', ' ', 'B');
		g_count_rows ++;
	}
}
