/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmilitar <mmilitar@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 16:19:34 by mmilitar          #+#    #+#             */
/*   Updated: 2024/08/17 16:30:31 by mmilitar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	len;
	int	i;

	if (argc > 1)
	{
		i = argc - 1;
		while (i > 0)
		{
			len = 0;
			while (argv[i][len] != '\0')
				len++;
			write(1, argv[i], len);
			write(1, "\n", 1);
			i--;
		}
	}
	return (0);
}
