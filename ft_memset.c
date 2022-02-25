/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbahraou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 15:39:18 by cbahraou          #+#    #+#             */
/*   Updated: 2022/02/25 11:09:16 by cbahraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

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
	char chaine[]="*Hello World";
    printf("%s ",ft_memset(chaine,'*',2));
}*/
