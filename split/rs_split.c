/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rs_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youngrch <youngrch@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/05 12:52:53 by youngrch          #+#    #+#             */
/*   Updated: 2020/12/05 18:29:25 by youngrch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int         is_space(char c)
{
	if (c == '\n')
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
        while (!is_space(*str) && *str != '\0')
            str++;
		count++;	
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
    dup[i] = '\0';
    return (dup);
}

char		*ft_enterdup(void)
{
	char *dup;

	dup = (char*)malloc((2)*sizeof(char));
	dup[0] = 'a';
	dup[1] = '\0';
	return (dup);
}

char        **ft_split(char *str)
{
    int i;
    int word_count;
    char *word_start;
    char **array;

    word_count = count_word(str);
	printf("%d\n", word_count);
    array = (char**)malloc((word_count + 1) * sizeof(char *));
    i = 0;
    while (*str)
    {
        while (is_space(*str))
            str++;
        if (*str == '\0')
            break ;
        word_start = str;
        while (!is_space(*str) && *str != '\0')
            str++;
        array[i] = ft_strndup(word_start, str - word_start);
        i++;
    }
    array[i] = 0;
    return (array);
}

int main()
{
	char a[100] = "10:\n  fff \n 	ff  dddddd20: sdfdsf ";
	char **bb;

	bb = ft_split(a);
	printf("%s \n", bb[0]);
	printf("%s \n", bb[1]);
	printf("%s \n", bb[2]);
	return 0 ;
}
