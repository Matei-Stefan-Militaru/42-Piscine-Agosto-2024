/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmilitar <mmilitar@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 10:25:24 by mmilitar          #+#    #+#             */
/*   Updated: 2024/08/14 10:34:54 by mmilitar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strstr(char *str, char *to_find)
{
	char	*haystack;
	char	*needle;

	if (*to_find == '\0')
	{
		return (str);
	}
	while (*str != '\0')
	{
		haystack = str;
		needle = to_find;
		while (*haystack != '\0' && *needle != '\0' && *haystack == *needle)
		{
			haystack++;
			needle++;
		}
		if (*needle == '\0')
		{
			return (str);
		}
		str++;
	}
	return (NULL);
}
