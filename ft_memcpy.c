/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcpy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbahraou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 15:51:06 by cbahraou          #+#    #+#             */
/*   Updated: 2022/02/25 10:54:10 by cbahraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*ptr;
	unsigned char	*ptr2;

	ptr = (unsigned char *)dest;
	ptr2 = (unsigned char *)src;
	if (dest == NULL && src == NULL)
		return (NULL);
	while (n-- > 0)
	{
		*(ptr++) = *(ptr2++);
	}
	return (dest);
}
/*int main()
{
	//char nom[]="bahraoui";
	//char prenom[]="chaimaa";
	printf("%s ",ft_memcpy(NULL,NULL,5));
	return 0;
}*/
