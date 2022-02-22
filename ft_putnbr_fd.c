/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbahraou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 12:33:12 by cbahraou          #+#    #+#             */
/*   Updated: 2022/02/18 18:08:39 by cbahraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "libft.h"

void	ft_putnbr_fd(int n,	int fd)
{
	long	number;

	number = n;
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		ft_putnbr_fd(n * (-1), fd);
	}
	else if (n >= 10)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putnbr_fd((n % 10), fd);
	}
	else
	{
		ft_putchar_fd((number + '0'), fd);
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
