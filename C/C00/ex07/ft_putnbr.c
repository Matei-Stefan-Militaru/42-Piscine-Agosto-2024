/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmilitar <mmilitar@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 19:31:54 by mmilitar          #+#    #+#             */
/*   Updated: 2024/08/10 20:44:22 by mmilitar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	long	numero;
	char	c;

	numero = nb;
	if (numero < 0)
	{
		write(1, "-", 1);
		numero = -numero;
	}
	if (numero > 9)
	{
		ft_putnbr(numero / 10);
		ft_putnbr(numero % 10);
	}
	else
	{
		c = numero + '0';
		write(1, &c, 1);
	}
}
