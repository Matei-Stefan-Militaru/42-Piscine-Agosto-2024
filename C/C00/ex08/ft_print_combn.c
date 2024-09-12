/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmilitar <mmilitar@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 22:05:12 by mmilitar          #+#    #+#             */
/*   Updated: 2024/08/11 00:46:22 by mmilitar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_combn(int n)
{
	char	comb[10];
	int		pos;

	if (n < 1 || n > 9)
		return ;
	pos = 0;
	while (pos < n)
	{
		comb[pos] = '0' + pos;
		pos++;
	}
	while (1)
	{
		write(1, comb, n);
		if (comb[0] != '0' + (10 - n))
			write(1, ", ", 2);
		pos = n - 1;
		while (pos >= 0 && comb[pos] == '9' - (n - pos - 1))
			pos--;
		if (pos < 0)
			break ;
		comb[pos]++;
		while (++pos < n)
			comb[pos] = comb[pos - 1] + 1;
	}
}
