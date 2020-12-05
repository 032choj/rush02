/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rs_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejung <ejung@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/05 10:49:13 by ejung             #+#    #+#             */
/*   Updated: 2020/12/05 16:28:37 by youngrch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int			ft_check_1(char **agv)
{
	int i;

	i = 0;
	while (agv[1][i])
	{
		if (!('0' <= agv[1][i] && agv[1][i] <= '9'))
		{
			ft_error();
			return (0);
		}
		i++;	
	}
	return (1);
}

int			ft_check_2(char **agv)
{
	int i;

	i = 0;
	while (agv[1][i])
	{
		if(!(('0' <= agv[1][i] && agv[1][i] <='9')\
			|| (agv[1][i] == '.') || (agv[1][i] == '_')\
			|| ('A' <= agv[1][i] && agv[1][i] <= 'Z')\
			|| ('a' <= agv[1][i] && agv[1][i] <= 'z')))
		{
			ft_error();
			return (0);
		}
		i++;
	}
	i = 0;
	while (agv[2][i])
	{
		if (!('0' <= agv[2][i] && agv[2][i] <= '9'))
		{	
			ft_error();
			return (0);
		}
		i++;
	}
	return (1);
}

int			ft_check(int agc, char **agv)
{
	int a;

	a = 1;
	if (agc == 2)
	{
		a = ft_check_1(agv);
	}
	else if (agc == 3)
	{
		a = ft_check_2(agv);
	}
	return (a);
}
