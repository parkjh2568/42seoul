/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junhypar <junhypar@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/11 10:11:02 by junhypar          #+#    #+#             */
/*   Updated: 2020/07/22 16:56:03 by junhypar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		ft_config(char *s)
{
	int i;

	i = 0;
	while (s[i])
	{
		if (s[i] == '\n')
			return (i);
		i++;
	}
	return (-22);
}

void	print_line(char **out, char **line, int i)
{
	int		j;
	char	*s;

	(*out)[i] = '\0';
	*line = ft_strdup(*out);
	j = ft_strlen(*out + i + 1);
	if (j == 0)
	{
		free(*out);
		*out = 0;
	}
	else
	{
		s = ft_strdup(*out + i + 1);
		free(*out);
		*out = s;
	}
}

int		get_next_line(int fd, char **line)
{
	char		buff[BUFFER_SIZE + 1];
	static char	*out[50];
	int			count;
	int			i;

	if (0 > fd || BUFFER_SIZE <= 0)
		return (-1);
	while ((count = read(fd, buff, BUFFER_SIZE)))
	{
		buff[count] = '\0';
		out[fd] = ft_strjoin(out[fd], buff);
		if ((i = ft_config(out[fd])) >= 0)
		{
			print_line(&out[fd], line, i);
			return (1);
		}
	}
	print_line(&out[fd], line, i);
	free(out[fd]);
	out[fd] = NULL;
	return (0);
}
