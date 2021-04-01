/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junhypar <junhypar@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/01 11:03:51 by junhypar          #+#    #+#             */
/*   Updated: 2021/04/01 16:52:26 by junhypar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char *s1, char *s2)
{
	char	*out;
	int		len1;
	int		len2;
	int		i;

	if (!s1 && !s2)
		return (NULL);
	i = 0;
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	out = malloc(sizeof(char) * (len1 + len2 + 1));
	if (!out)
		return (NULL);
	ft_strlcpy(out, s1, len1 + 1);
	ft_strlcpy(out + len1, s2, len2 + 1);
	return (out);
}
