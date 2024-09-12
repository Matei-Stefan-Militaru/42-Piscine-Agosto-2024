/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmilitar <mmilitar@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 12:43:18 by mmilitar          #+#    #+#             */
/*   Updated: 2024/08/26 13:02:37 by mmilitar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	nb;

	nb = 0;
	while (*str != '\0')
	{
		nb++;
		str++;
	}
	return (nb);
}

void	ft_concatenate(char *result, char **strs, char *sep, int size)
{
	int	i;
	int	j;
	int	pos;

	i = 0;
	pos = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
		{
			result[pos++] = strs[i][j++];
		}
		if (i < size -1)
		{
			j = 0;
			while (sep[j])
			{
				result[pos++] = sep[j++];
			}
		}
		i++;
	}
	result[pos] = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*result;
	int		i;
	int		total_length;

	if (size == 0)
	{
		result = (char *)malloc(1);
		if (result)
			result[0] = '\0';
		return (result);
	}
	i = 0;
	total_length = 0;
	while (i < size)
	{
		total_length += ft_strlen(strs[i]);
		i++;
	}
	total_length += ft_strlen(sep) * (size - 1) + 1;
	result = (char *)malloc(total_length);
	if (!result)
		return (NULL);
	ft_concatenate(result, strs, sep, size);
	return (result);
}
