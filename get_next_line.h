/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhachat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 15:05:16 by akhachat          #+#    #+#             */
/*   Updated: 2021/02/26 15:05:23 by akhachat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

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
