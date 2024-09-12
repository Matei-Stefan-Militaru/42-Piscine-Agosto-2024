/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmilitar <mmilitar@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 12:24:15 by mmilitar          #+#    #+#             */
/*   Updated: 2024/08/14 12:28:20 by mmilitar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

/*
int main(int argc, char *argv[])
{
    if (argc > 1)
    {
        for (int i = 1; i < argc; i++)
        {
            ft_putstr(argv[i]);
            if (i < argc - 1)
            {
                write(1, " ", 1);
            }
        }
        write(1, "\n", 1); 
    }
    else
    {
        write(1, "No arguments provided\n", 23);
    }

    return 0;
}
*/
