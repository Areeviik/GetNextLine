/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhachat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/14 17:52:36 by akhachat          #+#    #+#             */
/*   Updated: 2021/03/14 17:52:38 by akhachat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <fcntl.h>

int			get_next_line(int fd, char **line);
int			ft_strchr(const char *s, int c);
char		*ft_strjoin_hamzachiman(char *s1, char *s2);
size_t		ft_strlen(const char *str);
char		*vline(char *s);
char		*afterlineslife(char *s);

#endif

