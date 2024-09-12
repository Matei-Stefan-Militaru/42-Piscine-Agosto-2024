/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmilitar <mmilitar@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 10:07:59 by mmilitar          #+#    #+#             */
/*   Updated: 2024/08/15 10:45:36 by mmilitar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(char *str)
{
	int	total;
	int	is_negative;

	total = 0;
	is_negative = 0;
	while (*str == ' ' || *str == '\n' || *str == '\r' || *str == '\f'
		|| *str == '\t' || *str == '\v')
		str++;
	while ((*str == '-') || (*str == '+'))
	{
		if (*str == '-')
			is_negative++;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		total *= 10;
		total += (*str - '0');
		str++;
	}
	if (is_negative % 2 != 0)
		return (-total);
	else
		return (total);
}
/*
void	print_number(int num)
{
	char buffer[12];  
	int i = 0;
	int is_negative = 0;

	if (num < 0)
	{
		is_negative = 1;
		num = -num;
	}
	if (num == 0)
	{
		buffer[i++] = '0';
	}
	else
	{
		while (num > 0)
		{
			buffer[i++] = (num % 10) + '0';
			num /= 10;
		}
	}
	if (is_negative)
		buffer[i++] = '-';
	while (--i >= 0)
		write(1, &buffer[i], 1);
}

int	main(int argc, char *argv[])
{
	int	result;

	if (argc != 2)
		return (0);
	result = ft_atoi(argv[1]);
	print_number(result);

	return (0);
}
*/
