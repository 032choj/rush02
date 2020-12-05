/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youngrch <youngrch@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/05 13:10:16 by youngrch          #+#    #+#             */
/*   Updated: 2020/12/05 19:05:34 by youngrch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <fcntl.h>

void    ft_putchar(char c);
void    ft_putstr(char *str);
int     ft_strlen(char *str);
int     ft_atoi(char *str);
int     ft_error(void);

int		ft_check(int agc, char **agv);

char    *ft_filenb(int argc, char **argv);
char    *ft_filename(int argc, char **argv);

char    *open_and_read(int argc, char *filename);

char	**ft_split(char *str);
char	**ft_splitn(char *str);

void	ft_dic_print(char *str, char **dic);

#endif
