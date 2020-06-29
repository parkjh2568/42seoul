/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junhypar <junhypar@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/29 16:49:28 by junhypar          #+#    #+#             */
/*   Updated: 2020/06/29 17:08:37 by junhypar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

void	*ft_memchr(const void *src, int c, unsigned int n);
void	*ft_memmove(void *dest, const void *src, unsigned int n);
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);
void	ft_bzero(void *s, unsigned int n);
int		ft_memcmp(const void *s1, const void *s2, unsigned int n);
void	*ft_memset(void *ptr, int value, unsigned int num);
int		ft_strlen(char *str);
void	*ft_memccpy(void *dest, const void *src, int c, unsigned int n);
void	*ft_memcpy(void *dest, const void *src, unsigned int n);
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);
int		ft_strncmp(char *s1, char *s2, unsigned int n);
char	*ft_strdup(char *src);
char	*strchr(const char *s, int c);

#endif
