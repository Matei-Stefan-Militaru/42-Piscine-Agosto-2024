/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmilitar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 18:21:31 by mmilitar          #+#    #+#             */
/*   Updated: 2024/08/10 23:45:35 by mmilitar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void)
{
	int	p1;
	int	p2;

	p1 = 0;
	while (p1 < 99)
	{
		p2 = p1 + 1;
		while (p2 < 100)
		{
			write(1, &"0123456789"[p1 / 10], 1);
			write(1, &"0123456789"[p1 % 10], 1);
			write(1, " ", 1);
			write(1, &"0123456789"[p2 / 10], 1);
			write(1, &"0123456789"[p2 % 10], 1);
			if (p1 != 98 || p2 != 99)
				write(1, ", ", 2);
			p2++;
		}
		p1++;
	}
}
