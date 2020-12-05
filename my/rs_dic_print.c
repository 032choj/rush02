/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rs_dic_print.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youngrch <youngrch@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/05 16:01:30 by youngrch          #+#    #+#             */
/*   Updated: 2020/12/05 19:19:50 by youngrch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"


void		ft_dic_print1(char *dic)
{
	char 	**array;
	int		len;
	int		i;

	array = ft_split(dic);
	len = 0;
	while (array[len])
		len++;
	printf("%d\n", len);
	i = 1;
	while (array[i])
	{
		ft_putstr(array[i]);
		if (i != (len -1))
			ft_putchar(' ');
		i++;
	}
}

void		ft_dic_print(char *str, char **dic)
{
	int i;

	i = 0;
	while (dic[i])
	{
		if (ft_atoi(str) == ft_atoi(dic[i]))
		{	
			ft_dic_print1(dic[i]);
			break ;
		}
		i++;
	}
}
