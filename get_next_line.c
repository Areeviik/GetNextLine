/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhachat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 15:04:17 by akhachat          #+#    #+#             */
/*   Updated: 2021/02/26 15:04:29 by akhachat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*vline(char *s)
{
	int		i;
	char	*n;

	i = 0;
	if (!s)
	{
		n = malloc(1);
		n[0] = '\0';
		return (n);
	}
	while (s && s[i] != '\n' && s[i] != '\0')
		i++;
	if (!(n = malloc(i + 1)))
		return (NULL);
	i = 0;
	while (s[i] != '\0' && s[i] != '\n' && s)
	{
		n[i] = s[i];
		i++;
	}
	n[i] = '\0';
	return (n);
}

char	*afterlineslife(char *s)
{
	char	*n;
	int		i;
	int		j;
	int		l;

	if (!s)
		return (NULL);
	i = 0;
	while (s[i] != '\n' && s[i] != '\0')
		i++;
	if (s[i] == '\0')
	{
		free(s);
		return (NULL);
	}
	l = ft_strlen(s) - i;
	if (!(n = malloc(sizeof(char) * (l + 1))))
		return (NULL);
	i++;
	j = 0;
	while (s[i] != '\0')
		n[j++] = s[i++];
	n[j] = '\0';
	free(s);
	return (n);
}

int		get_next_line(int fd, char **line)
{
	int			r;
	char		*buffer;
	static char	*tmp;

	if (fd < 0 || !line || BUFFER_SIZE <= 0)
		return (-1);
	if (!(buffer = malloc(sizeof(char) * (BUFFER_SIZE + 1))))
		return (-1);
	while ((r = read(fd, buffer, BUFFER_SIZE)) > 0)
	{
		buffer[r] = '\0';
		tmp = ft_strjoin_hamzachiman(tmp, buffer);
		if (ft_strchr(tmp, '\n') || ft_strchr(tmp, '\0'))
			break ;
	}
	if (r < 0)
		return (-1);
	free(buffer);
	*line = vline(tmp);
	tmp = afterlineslife(tmp);
	if (r == 0 && !tmp)
		return (0);
	return (1);
}
