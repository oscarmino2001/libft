/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlen.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbahraou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 21:43:01 by cbahraou          #+#    #+#             */
/*   Updated: 2022/02/25 12:31:38 by cbahraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;
	int		cnt;

	i = 0;
	cnt = 0;
	while (*(str + i) != '\0')
	{
		cnt++;
		i++;
	}
	return (cnt);
}
/*int main()
{
	printf("la longueur est %lu",ft_strlen("chaimaa"));
	return 0;
}*/
