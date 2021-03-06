/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbahraou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 10:21:51 by cbahraou          #+#    #+#             */
/*   Updated: 2022/02/23 19:16:09 by cbahraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"
#include <string.h>

void	*ft_calloc(size_t num, size_t size)
{
	void	*tab;

	tab = malloc(num * size);
	if (tab == NULL)
		return (NULL);
	bzero(tab, num * size);
	return (tab);
}
/*int main()
{
	int *a,*b,*c;
	a=(int*) malloc(0*sizeof(int));
	printf("malloc :  %d",a[7]);
	b=(int*) calloc(0,sizeof(int));
	printf("\ncalloc : %d\n",b[2]);
	c=(int*)ft_calloc(0,sizeof(int));
	printf("ft_calloc : %d\n",c[2]);
	return 0;
}*/
