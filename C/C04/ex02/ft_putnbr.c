/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmilitar <mmilitar@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 09:52:59 by mmilitar          #+#    #+#             */
/*   Updated: 2024/08/15 10:03:57 by mmilitar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <ctype.h>

int	ft_atoi(char *str);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		nb = 147483648;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
	}
	ft_putchar(nb % 10 + '0');
}

/*
int	ft_atoi(char *str)
{
	int	total;
	int	negative;

	while (isspace(*str))
	{
		str++;
	}
	negative = 0;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			negative = 1;
		str++;
	}
	total = 0;
	while (*str >= '0' && *str <= '9')
	{
		total = total * 10 + (*str - '0');
		str++;
	}
	if (negative > 0)
		return (-total);
	else
		return (total);
}

int main(int argc, char *argv[])
{
    int result;

    if (argc != 2)
        return (0);

    result = ft_atoi(argv[1]);
    ft_putnbr(result);
    ft_putchar('\n');

    return (0);
}
*/
