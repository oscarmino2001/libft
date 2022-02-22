/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fy_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbahraou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 10:30:45 by cbahraou          #+#    #+#             */
/*   Updated: 2022/02/19 19:11:08 by cbahraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*string;
	int		i;
	int		j;

	j = 0;
	i = start;
	string = (char *)malloc(len * sizeof(char));
	if (string != NULL)
	{
		string = (char *)s + start;
		while ((int)len-- > 0)
		{
			string[j++] = s[i++];
		}
		string[j] = '\0';
		return (string);
	}
	return (NULL);
}
/*int main()
{
	char s1[]="chaimaabahraoui";
	printf("%s",ft_substr(s1,6,5));
	return 0;
}*/
