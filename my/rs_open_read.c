/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_open_read.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeyeon <jeyeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/05 10:15:46 by jeyeon            #+#    #+#             */
/*   Updated: 2020/12/05 13:49:27 by youngrch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

char	*open_read_number_dict(char *filename)
{
	int		fd;
	char	*buffer;

	buffer = malloc((sizeof(char) * 2048));
	if (buffer == 0)
		return (0);
	fd = open(filename, O_RDONLY);
	if (read(fd, buffer, 2048) == -1)
		write(1, "Error\n", 6);
	else
		close(fd);
	return (buffer);
}

char	*open_read_argv(char *filename)
{
	int		fd;
	char	*buffer;

	buffer = malloc((sizeof(char) * 2048));
	if (buffer == 0)
		return (0);
	fd = open(filename, O_RDONLY);
	if (read(fd, buffer, 2048) == -1)
		write(1, "Error\n", 6);
	else
		close(fd);
	return (buffer);
}

char	*open_and_read(int argc, char *filename)
{
	char	*buffer;
	
	buffer = 0;
	if (argc == 2)
		buffer = open_read_number_dict(filename);
	else if (argc == 3)
		buffer = open_read_argv(filename);
	return (buffer);
}
