/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbahraou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 09:25:23 by cbahraou          #+#    #+#             */
/*   Updated: 2022/02/21 08:13:27 by cbahraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	size_t	len;
	int		i;

	len = ft_strlen(s);
	i = 0;
	while (i < (int)len)
	{
		f(i, (s + i));
		i++;
	}
}
/*void function(unsigned int index,char *c)
{
	printf("le caractere d'indice %i est %c \n",index,*c);
}
int main()

	char str[]="abcd";
   	ft_striteri(str,function);
	return 0;
}*/
