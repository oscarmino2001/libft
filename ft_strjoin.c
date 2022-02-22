/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbahraou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 10:56:56 by cbahraou          #+#    #+#             */
/*   Updated: 2022/02/18 16:26:07 by cbahraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*string;
	int		len;
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	k = 0;
	len = (int)strlen(s1) + (int)strlen(s2);
	string = (char *)malloc(len * sizeof(char));
	if (string != NULL)
	{
		while (s2[i] != '\0')
		{
			while (s1[j] != '\0')
			{
				string[k++] = s1[j++];
			}
			string[k++] = s2[i++];
		}
		string[k] = '\0';
		return (string);
	}
	return (NULL);
}
/*int main()
{
	char chaine[]="chaimaa ";
	char chaine2[]="bahraoui";
	printf("%s",ft_strjoin(chaine,chaine2));
	return 0;
}*/
