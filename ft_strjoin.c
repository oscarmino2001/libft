/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbahraou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 10:56:56 by cbahraou          #+#    #+#             */
/*   Updated: 2022/02/24 14:33:16 by cbahraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*total;
	char	*ptr;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	total = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (total == NULL)
		return (NULL);
	ptr = total;
	while (*s1 != '\0')
	{
		*total = *s1;
		total++;
		s1++;
	}
	while (*s2 != '\0')
	{
		*total = *s2;
		total++;
		s2++;
	}
	*total = '\0';
	return (ptr);
}
/*int main()
{
	char chaine[]="chaimaa ";
	char chaine2[]="bahraoui";
	printf("%s",ft_strjoin(chaine,chaine2));
	return 0;
}*/
