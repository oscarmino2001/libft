/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strnstr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbahraou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 11:49:59 by cbahraou          #+#    #+#             */
/*   Updated: 2022/02/24 14:36:12 by cbahraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t		i;
	size_t		j;
	size_t		l;

	i = 0;
	if (needle[i] == '\0')
		return ((char *)haystack);
	if (haystack == NULL && len == 0)
		return (NULL);
	while (haystack[i] != '\0' && len > 0)
	{
		j = 0;
		l = len;
		while (haystack[i + j] == needle[j] && l > 0)
		{
			if (needle[j + 1] == '\0')
				return ((char *)haystack + i);
			j++;
			l--;
		}
		i++;
		len--;
	}
	return (NULL);
}
/*int main()
{
	char chaine1[]="aaabcabcd";
	char chaine2[]="aabc";

	printf("%s\n",strnstr(chaine1,chaine2,0));
	printf("%s\n",ft_strnstr(chaine1,chaine2,0));
	printf("%s\n",strnstr(chaine1,"a",-1));
	printf("%s",ft_strnstr(chaine1,"a",-1));
	return 0;
}*/
