/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmilitar <mmilitar@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 15:12:20 by mmilitar          #+#    #+#             */
/*   Updated: 2024/08/17 15:28:15 by mmilitar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	len;

	len = 0;
	if (argc > 0)
	{
		while (argv[0][len] != '\0')
			len++;
		write(1, argv[0], len);
		write(1, "\n", 1);
	}
	return (0);
}
