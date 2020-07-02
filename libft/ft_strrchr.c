/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junhypar <junhypar@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/29 17:24:56 by junhypar          #+#    #+#             */
/*   Updated: 2020/07/02 14:38:00 by junhypar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			len(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char		*ft_strrchr(const char *s, int c)
{
	const char	*d;
	int			i;

	i = len(s) + 1;
	d = s + i - 1;
	while (i--)
	{
		if (*d == c)
			return ((char *)d);
		d--;
	}
	return (0);
}
