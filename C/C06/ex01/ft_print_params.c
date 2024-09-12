/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmilitar <mmilitar@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 15:52:58 by mmilitar          #+#    #+#             */
/*   Updated: 2024/08/17 16:17:07 by mmilitar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	len;
	int	i;

	if (argc > 1)
	{
		i = 1;
		while (i < argc)
		{
			len = 0;
			while (argv[i][len] != '\0')
				len++;
			write(1, argv[i], len);
			write(1, "\n", 1);
			i++;
		}
	}
	return (0);
}
