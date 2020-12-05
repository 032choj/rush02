/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rs_dic_print.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youngrch <youngrch@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/05 16:01:30 by youngrch          #+#    #+#             */
/*   Updated: 2020/12/05 16:53:10 by youngrch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void		ft_dic_print(char *str, char **dic)
{
	int i;
	int j;

	i = 0;
	while (dic[i])
	{
		if (ft_atoi(str) == ft_atoi(dic[i]))
		{	
			j = 0;
			while (dic[i + j])
			{	
				if( dic[i + j][0] 
			}


			ft_putstr(dic[i + 1]);
			
			
			break ;
		}
		i++;
	}
}
