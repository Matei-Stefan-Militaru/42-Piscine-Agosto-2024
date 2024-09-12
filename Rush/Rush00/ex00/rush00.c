/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmilitar <mmilitar@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 10:12:06 by mmilitar          #+#    #+#             */
/*   Updated: 2024/08/11 10:24:09 by mmilitar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	linestart(int x1)
{
	int	i;

	ft_putchar('o');
	i = 1;
	while (i < x1 - 1)
	{
		ft_putchar('-');
		i++;
	}
	if (x1 > 1)
		ft_putchar('o');
	ft_putchar('\n');
}

void	linemiddle(int x3)
{
	int	i;

	ft_putchar('|');
	i = 1;
	while (i < x3 - 1)
	{
		ft_putchar(' ');
		i++;
	}
	if (x3 > 1)
		ft_putchar('|');
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	i;

	if (x < 1 || y < 1)
		return ;
	if (y >= 1)
		linestart(x);
	if (y >= 2)
	{
		i = 1;
		while (i < y - 1)
		{
			linemiddle(x);
			i++;
		}
		linestart(x);
	}
}
