/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbahraou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 20:58:06 by cbahraou          #+#    #+#             */
/*   Updated: 2022/02/23 18:51:22 by cbahraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*string;
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (s[i] != '\0')
		i++;
	string = (char *)malloc((i + 1) * sizeof(char));
	if (string != NULL)
	{
		while (s[j] != '\0')
		{
			string[j] = s[j];
			j++;
		}
		string[j] = '\0';
	}
	return (string);
}
/*int main()
{
	char chaine[]="chaimaa";
	printf("%s",ft_strdup(chaine));
	return 0;
}*/
