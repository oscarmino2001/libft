/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbahraou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 21:20:00 by cbahraou          #+#    #+#             */
/*   Updated: 2022/02/21 23:14:14 by cbahraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

char	*ft_strmapi(const char *s1, char (*f)(unsigned int, char))
{
	int		i;
	char	*string;
	size_t	len;

	i = 0;
	len = ft_strlen(s1);
	string = (char *)malloc(((int)len + 1) * sizeof(char));
	if (string != NULL)
	{
		while (i <= (int)len)
		{	
			string[i] = (f)((unsigned int)i, s1[i]);
			i++;
		}
		string[i] = '\0';
		return (string);
	}
	return (NULL);
}

char function(unsigned int nb,char c)
{
//	printf("le caractere d'indice %i est:  %c\n",nb,c); 
//	return (c+32);
	printf("%d", nb);
	return (c +nb);
}

int main()
{
	char* str="CHAIMAA";
	printf("%s",ft_strmapi(str,function));
	return 0;
}
