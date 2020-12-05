/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youngrch <youngrch@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/05 13:07:11 by youngrch          #+#    #+#             */
/*   Updated: 2020/12/05 15:20:48 by youngrch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int         main(int ac, char **av)
{
	char *nb;
	char *filename;
	char *readfile;
	char **dic;

	nb = 0;
	filename = 0;
	readfile = 0;
	if (ac == 1)
	{
		return (0);
	}
	if (ft_check(ac, av))
	{
		nb = ft_filenb(ac, av);
		filename = ft_filename(ac, av);
		printf("%s\n", nb);
		readfile = open_and_read(ac, filename);
		dic = ft_split(readfile);
	}
	return (0);
}
