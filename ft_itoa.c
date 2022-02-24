/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbahraou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 12:49:22 by cbahraou          #+#    #+#             */
/*   Updated: 2022/02/24 10:42:18 by cbahraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	numb(int nb)
{
	if (nb == 0)
		return (1);
	return (1 + numb(nb / 10));
}

static char	*affect(char *s, int num, int i)
{
	unsigned int	l;

	l = 0;
	if (num == 0)
		*s = num + 48;
	else if (num < 0)
	{
		*s = '-';
		l = num * (-1);
	}
	else
		l = num;
	s[i + 1] = '\0';
	while (l != 0)
	{
		s[i] = l % 10 + 48;
		l = l / 10;
		i--;
	}
	return (s);
}

char	*ft_itoa(int n)
{
	int		len;
	char	*dst;

	if (n > 0)
		len = numb(n) - 1;
	else
		len = numb(n);
	dst = (char *)malloc(sizeof(char) * (len + 1));
	if (dst == NULL)
		return (NULL);
	return (affect(dst, n, len - 1));
}


/*int main()
{
	int a= -410;
	printf("%s",ft_itoa(a));
	return 0;;
}*/
