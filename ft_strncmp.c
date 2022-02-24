/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbahraou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 07:52:24 by cbahraou          #+#    #+#             */
/*   Updated: 2022/02/23 21:55:58 by cbahraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	const unsigned char	*str1;
	const unsigned char	*str2;
	size_t				i;
	size_t				r;

	str1 = (const unsigned char *)s1;
	str2 = (const unsigned char *)s2;
	i = 0;
	r = 0;
	if (n == 0)
		return (r);
	while ((str1[i] == str2[i] && str1[i] != '\0') && i < n)
		i++;
	if (i == n)
		i--;
	r = str1[i] - str2[i];
	return (r);
}
