/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rs_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youngrch <youngrch@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/05 12:52:53 by youngrch          #+#    #+#             */
/*   Updated: 2020/12/05 17:13:49 by youngrch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int         is_space(char c)
{
	if (c == ' ' || c == '\t')
		return (1);
	return (0);
}

int         count_word(char *str)
{
    int count;

    count = 0;
    while (*str)
    {
        while (is_space(*str))
            str++;
        if (*str == '\0')
           break;
        while (!is_space(*str) && *str != '\0' && *str != '\n')
            str++;
        count++;
		if (*str == '\n')
		{
			str++;
			count++;
		}
    }
    return (count);
}

char        *ft_strndup(char *str, unsigned int n)
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

char        **ft_split(char *str)
{
    int i;
    int word_count;
    char *word_start;
    char **array;

    word_count = count_word(str);
    array = (char**)malloc((word_count + 1) * sizeof(char *));
    i = 0;
    while (*str)
    {
        while (is_space(*str))
            str++;
        if (*str == '\0')
            break ;
        word_start = str;
        while (!is_space(*str) && *str != '\0' && *str != '\n')
            str++;
        array[i] = ft_strndup(word_start, str - word_start);
        i++;
		if (*str == '\n')
		{
			array[i] = "\n";
			i++;
		}
    }
    array[i] = 0;
    return (array);
}

int main()
{
	char a[100] = "10: dddddd\n20: sdfdsf dsfsdfd\n";
	char **bb;

	bb = ft_split(a);
	printf("%s \n", bb[0]);
	return 0 ;
}
