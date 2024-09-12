/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmilitar <mmilitar@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 12:49:40 by mmilitar          #+#    #+#             */
/*   Updated: 2024/08/12 13:35:46 by mmilitar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	char_is_alpha(char c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')
		|| (c >= '0' && c <= '9'));
}

char	to_upper(char c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 'a' + 'A');
	return (c);
}

char	to_lower(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (c - 'A' + 'a');
	return (c);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	capitalize_next;

	i = 0;
	capitalize_next = 1;
	while (str[i])
	{
		if (capitalize_next && char_is_alpha(str[i]))
		{
			str[i] = to_upper(str[i]);
			capitalize_next = 0;
		}
		else if (!capitalize_next && char_is_alpha(str[i]))
		{
			str[i] = to_lower(str[i]);
		}
		else if (!char_is_alpha(str[i]))
		{
			capitalize_next = 1;
		}
		i++;
	}
	return (str);
}

/*
int main()
{
    char text[] = "salut,tu vas ? 42mots quarante-deux; cinquante+et+un";
    printf("AVANT: %s\n", text);      
    ft_strcapitalize(text);
    printf("APRES: %s\n", text);
    return 0;
}
*/
