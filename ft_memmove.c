/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memmove.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbahraou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 15:56:46 by cbahraou          #+#    #+#             */
/*   Updated: 2022/02/25 10:40:43 by cbahraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*dst1;
	const unsigned char	*src1;

	dst1 = (unsigned char *)dst;
	src1 = (const unsigned char *)src;
	if (dst1 == src1)
		return (dst);
	else if (dst1 > src1)
	{
		src1 = src1 + len - 1;
		dst1 = dst1 + len - 1;
		while (len > 0)
		{
			*dst1 = *src1;
			dst1--;
			src1--;
			len--;
		}
	}
	else
		dst = memcpy(dst1, src1, len);
	return (dst);
}
/*int main()
{
	char prenom[]="chaimaa";
   	printf("%s",ft_memmove(prenom + 2,prenom,4));
	return 0;
}*/
