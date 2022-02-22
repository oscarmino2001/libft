/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbahraou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 13:04:30 by cbahraou          #+#    #+#             */
/*   Updated: 2022/02/21 10:43:11 by cbahraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

char	*func(char *string, int j, char const *set)
{
	int	k;
	int	i;

	k = 0;
	i = 0;
	while (set[k] != '\0')
	{
		if (string[i] == set[k])
		{
			i++;
			k = 0;
		}
		else if (string[j] == set[k])
		{
			k = 0;
			j--;
		}
		else if ((string[i] != set[k]) || (string[j] != set[k]))
			k++;
	}
	string[j +1] = '\0';
	string = string + i;
	return (string);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*string;
	size_t	len;
	int		j;

	len = ft_strlen(s1);
	j = (int)len - 1;
	string = (char *)malloc((len + 1) * sizeof(char));
	string = ft_strdup(s1);
	return (func(string, j, set));
}
/*
int main()
{
	char s1[]=" ma chaine         ";
	char set[]=" ";
	printf("%s",ft_strtrim(s1,set));
	return 0;
}*/
