/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbahraou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 08:25:08 by cbahraou          #+#    #+#             */
/*   Updated: 2022/02/21 12:17:37 by cbahraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

char	*ft_strchr(const char *string, int c)
{
	int	i;

	i = 0;
	while ((*(string + i) != '\0') && (*(string + i) != c))
	{
			i++;
	}
	if (*(string + i) == '\0')
		return (NULL);
	return ((char *) string + i);
}
/*int main()
{
	char chaine[9]="chaimaaa";
	char c ='i';
	printf("%s",strchr(chaine,c));
	return 0;
}*/
