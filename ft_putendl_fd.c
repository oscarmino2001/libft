/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbahraou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 11:52:32 by cbahraou          #+#    #+#             */
/*   Updated: 2022/02/24 11:42:38 by cbahraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

void	ft_putendl_fd(char *s, int fd)
{
	if (s == NULL)
		return ;
	write(fd, s, strlen(s));
	write(fd, "\n", 1);
}
/*int main()
{
	const char* filename = "libft.h";
	char* string="salam";
	int fd = open(filename,O_WRONLY);
   if (fd == -1)
 	{
		perror("open");
		exit(EXIT_FAILURE);
	}
	ft_putendl_fd(string,fd);
	close(fd);
	exit(EXIT_SUCCESS);
}*/
