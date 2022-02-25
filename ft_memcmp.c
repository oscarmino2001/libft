/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcmp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbahraou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 16:48:33 by cbahraou          #+#    #+#             */
/*   Updated: 2022/02/25 14:13:32 by cbahraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	size_t			i;
	unsigned char	*ptr;
	unsigned char	*ptr2;

	i = 0;
	if (n == 0)
		return (0);
	ptr = (unsigned char *)str1;
	ptr2 = (unsigned char *)str2;
	while (*ptr == *ptr2 && ++i < n)
	{
		ptr++;
		ptr2++;
	}
	return ((int)(*ptr - *ptr2));
}
/*int main()
{
	char str[] = "chaimaa";
	char str2[] = "bahraoui";
	printf("%d",ft_memcmp(str,str2,5));
	return 0;
}*/
