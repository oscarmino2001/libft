/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbahraou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 15:39:18 by cbahraou          #+#    #+#             */
/*   Updated: 2022/02/21 11:56:50 by cbahraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	*ft_memset(void *str, int value, size_t count)
{
	unsigned char	*ptr;

	ptr = str;
	while (count-- > 0)
		*ptr++ = value;
	return (str);
}
/*int main()
{
	char chaine[]="Hello World";
    printf("%s ",memset(chaine+2,'*',4));
}*/
