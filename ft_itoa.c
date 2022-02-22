/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbahraou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 12:49:22 by cbahraou          #+#    #+#             */
/*   Updated: 2022/02/21 16:09:45 by cbahraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

int	num_digit(int nb)
{
	int	num_digit;

	num_digit = 0;
	while (nb != 0)
	{
		nb /= 10;
		num_digit++;
	}
	return (num_digit);
}

char	*negative_num(int nb)
{
	char	*str;
	int		value;
	int		i;
	int		num_digits;

	num_digits = num_digit(nb) + 1;
	str = (char *)malloc((num_digits + 2) * sizeof (char));
	str[0] = '-';
	nb *= -1;
	i = num_digits;
	while (i-- > 1)
	{
		value = nb % 10;
		nb /= 10;
		str[i] = value + '0';
	}
	str[num_digits + 1] = '\0';
	return (str);
}

char	*ft_itoa(int nb)
{
	int		num_digits;
	int		j;
	int		num;
	char	*str;
	char	value;

	j = 0;
	num = nb;
	num_digits = num_digit(nb);
	if (nb < 0)
		str = negative_num(nb);
	else
	{
		str = (char *)malloc((num_digits + 1) * sizeof (char));
		while (num_digits-- > 0)
		{
			value = nb % 10;
			nb /= 10;
			str[num_digits] = value + '0';
		}
		str[num_digits] = '\0';
	}
	if (num == 0)
		str[j] = '0';
	return (str);
}
/*int main()
{
	int a= -410;
	printf("%s",ft_itoa(a));
	return 0;;
}*/
