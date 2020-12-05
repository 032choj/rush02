/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rs_splitn.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youngrch <youngrch@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/05 12:52:53 by youngrch          #+#    #+#             */
/*   Updated: 2020/12/05 19:09:39 by youngrch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int         is_spacen(char c)
{
	if (c == '\n')
		return (1);
	return (0);
}

int         count_wordn(char *str)
{
    int count;

    count = 0;
    while (*str)
    {
        while (is_spacen(*str))
            str++;
        if (*str == '\0')
           break;
        while (!is_spacen(*str) && *str != '\0')
            str++;
        count++;
    }
    return (count);
}

char        *ft_strndupn(char *str, unsigned int n)
{
    unsigned int    i;
    char            *dup;

    dup = (char*)malloc((n + 1) * sizeof(char));
    i = 0;
    while (i < n)
    {
        dup[i] = str[i];
        i++;
    }
    dup[i] = 0;
    return (dup);
}

char        **ft_splitn(char *str)
{
    int i;
    int word_count;
    char *word_start;
    char **array;

    word_count = count_wordn(str);
    array = (char**)malloc((word_count + 1) * sizeof(char *));
    i = 0;
    while (*str)
    {
        while (is_spacen(*str))
            str++;
        if (*str == '\0')
            break ;
        word_start = str;
        while (!is_spacen(*str) && *str != '\0')
            str++;
        array[i] = ft_strndupn(word_start, str - word_start);
        i++;
    }
    array[i] = 0;
    return (array);
}
