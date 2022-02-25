/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbahraou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 08:48:56 by cbahraou          #+#    #+#             */
/*   Updated: 2022/02/25 12:28:00 by cbahraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		j;

	j = ft_strlen(s);
	while (j >= 0)
	{
		if (s[j] == (char)c)
			return ((char *)s + j);
		j--;
	}
	return (NULL);
}
/*int main()
{
	char chaine[20]=" chaimaabahraoui";
	char ch= ' ';
	printf("%s",ft_strrchr(chaine,ch));
	return 0;
}*/
