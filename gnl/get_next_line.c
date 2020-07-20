/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junhypar <junhypar@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/11 10:11:02 by junhypar          #+#    #+#             */
/*   Updated: 2020/07/20 22:05:37 by junhypar         ###   ########.fr       */
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

void	print_line(char *out, char **line, int i)
{
	int		j;
	char	*s;

	j = ft_strlen(out) - i;
	s = malloc(sizeof(char) * j);
	ft_strlcpy(*line, out, i);
	ft_strlcpy(s, (out + i), j);
	free(out);
	out = s;
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
			print_line(out[fd], &*line, i);
			return (1);
		}
	}
	print_line(out[fd], &*line, i);
	return (0);
}
