/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbahraou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 08:48:56 by cbahraou          #+#    #+#             */
/*   Updated: 2022/02/21 12:18:22 by cbahraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

char	*ft_strrchr(const char *string, int c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (*(string + i) != '\0')
	{
		if (*(string + i) == c)
			j = i;
		i++;
	}
	if (*(string + j) == '\0')
		return (NULL);
	return ((char *)(string + j));
}
/*int main()
{
	char chaine[20]=" chaimaabahraoui";
	char ch= ' ';
	printf("%s",ft_strrchr(chaine,ch));
	return 0;
}*/
