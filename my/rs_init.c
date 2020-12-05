/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youngrch <youngrch@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/05 13:20:41 by youngrch          #+#    #+#             */
/*   Updated: 2020/12/05 13:39:13 by youngrch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

char	*ft_make_array(char *array, char *str)
{
	int i;
	int len;
	
	i = 0;
	len = ft_strlen(str);
	array = (char*)malloc((len + 1) * sizeof(char));
	while (array[i] != '\0')
	{
		array[i] = str[i];
		i++;
	}
	array[i] = '\0';
	return (array);
}

char	*ft_filename(int argc, char **argv)
{
	char	*filename;
	char	*basename;

	filename = 0;
	basename = "numbers.dict";
	if (argc == 2)
	{
		filename = ft_make_array(filename, basename);
	}
	else
	{
		filename = ft_make_array(filename, argv[1]);
	}
	return (filename);
}

char *ft_filenb(int argc, char **argv)
{
	char	*nb;

	nb = 0;
	if (argc == 2)
	{
		nb = ft_make_array(nb, argv[1]);
	}
	else
	{
		nb = ft_make_array(nb, argv[2]);
	}
	return (nb);
}
