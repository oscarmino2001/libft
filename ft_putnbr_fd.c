/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbahraou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 12:33:12 by cbahraou          #+#    #+#             */
/*   Updated: 2022/02/24 12:03:27 by cbahraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	nb;

	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		nb = n * (-1);
	}
	else
		nb = n;
	if (nb < 10)
		ft_putchar_fd(nb + 48, fd);
	else
	{
		ft_putnbr_fd(nb / 10, fd);
		ft_putchar_fd(nb % 10 + 48, fd);
	}
}
/*int main()
{
	const char* filename = "libft.h";
	int fd = open(filename,O_WRONLY);
	if(fd == -1)
	{
		perror("open");
		exit(EXIT_FAILURE);
	}
	ft_putnbr_fd(5552,fd);
	close(fd);
	exit(EXIT_SUCCESS);
	return 0;
}*/
