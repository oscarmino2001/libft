/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memchr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbahraou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 16:34:13 by cbahraou          #+#    #+#             */
/*   Updated: 2022/02/25 12:17:33 by cbahraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*s1;
	size_t				i;
	unsigned char		b;

	i = 0;
	s1 = (const unsigned char *)s;
	b = (unsigned char)c;
	while (i < n)
	{
		if (s1[i] == b)
			return ((void *)s + i);
		i++;
	}
	return (NULL);
}
/*int main()
{
	char str[] = "chaimaa";
	printf("%s",ft_memchr(str,'i',9));
	return 0;
}*/
