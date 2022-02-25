/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbahraou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 22:38:42 by cbahraou          #+#    #+#             */
/*   Updated: 2022/02/25 10:53:58 by cbahraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	int		f;
	int		i;
	int		t;
	int		len1;
	int		len2;

	i = 0;
	len2 = ft_strlen(src);
	if (size == 0)
		return (len2 + (int)size);
	len1 = ft_strlen(dst);
	t = len1 + len2;
	if ((int)size <= len1)
		return (len2 + (int)size);
	f = (int)size - len1 - 1;
	while (f-- > 0 && src[i] != '\0')
		dst[len1++] = src[i++];
	dst[len1] = '\0';
	return (t);
}

/*int	main(void)
{
	int		ret;
	char	dest[30];
	char	*src = "zzz";
	dest[0] = 'a';
	dest[1] = 'b';
	dest[2] = 'c';
	dest[3] = '\0';

	ret = strlcat(dest, src, -1);
	printf("%d|%s\n", ret, dest);
	return (0);
}*/
