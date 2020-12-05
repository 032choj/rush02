/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_base.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youngrch <youngrch@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/05 13:18:47 by youngrch          #+#    #+#             */
/*   Updated: 2020/12/05 13:35:16 by youngrch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int c;

	c = 0;
	while (str[c] != '\0')
	{
		ft_putchar(str[c]);
		c++;
	}
}

int		ft_strlen(char *str)
{
	int c;

	c = 0;
	while (str[c] != '\0')
		c++;
	return (c);
}

int         ft_atoi(char *str)
{
    int number;

    number = 0;
    while (*str)
    {
        if (!(*str == ' ' || (*str > 8 && *str < 14)))
            break ;
        str++;
    }
    while (*str)
    {
        if (*str >= 48 && *str <= 57)
        {
            number *= 10;
            number += *str - '0';
        }
        else
            break ;
        str++;
    }
    return (number);
}

int		ft_error(void)
{
	ft_putstr("Error");
	return (0);
}
