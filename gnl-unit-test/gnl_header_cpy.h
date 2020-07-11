/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junhypar <junhypar@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/11 10:42:11 by junhypar          #+#    #+#             */
/*   Updated: 2020/07/11 11:25:57 by junhypar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>

# ifndef BUFFER_SIZE

# endif

int		get_next_line(int fd, char **line);
void	ft_bzero(void *s, size_t n);
size_t	ft_strlcpy(char *dest, char *src, size_t size);
int		ft_strlen(char *str);
char	*ft_strdup(char *src);
char	*ft_strjoin(char const *s1, char const *s2);
#endif
