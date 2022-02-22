/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strnstr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbahraou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 11:49:59 by cbahraou          #+#    #+#             */
/*   Updated: 2022/02/21 12:31:41 by cbahraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	int	i;
	int	j;
	int	cnt;

	i = 0;
	j = 0;
	cnt = 0;
	if (little[j] == '\0')
		return ((char *)big);
	while (((big[i] != '\0') && (little[j] != '\0')) && (cnt < (int)len))
	{
		if (big[i] == little[j++])
			i++;
		else
		{
			j = 0;
			i++;
		}
		cnt++;
	}
	if (little[j] == '\0')
		return ((char *)big + (i - j));
	else
		return (NULL);
}
/*int main()
{
	char chaine1[]="hihellohola";
	char chaine2[]="hello";

	printf("%s\n",strnstr(chaine1,chaine2,7));
	printf("%s\n",ft_strnstr(chaine1,chaine2,7));
	printf("%s\n",strnstr(chaine1,chaine2,4));
	printf("%s",ft_strnstr(chaine1,chaine2,4));
	return 0;
}*/
