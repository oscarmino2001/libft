/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbahraou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 15:39:18 by cbahraou          #+#    #+#             */
/*   Updated: 2022/02/24 12:49:57 by cbahraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
