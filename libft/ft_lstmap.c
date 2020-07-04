/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junhypar <junhypar@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/03 09:42:04 by junhypar          #+#    #+#             */
/*   Updated: 2020/07/04 20:49:12 by junhypar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	start;
	t_list	ot;

	start = ft_lstnew(f(lst->content));
	if (!start)
		return (NULL);
	ot = lst->next;
	while (ot)
	{
		ot->next = (ft_lstnew(f(lst->content)));
		if (!ot)
		{
			while (start)
			{
				ot = start;
				start = start->next;
				del(ot->content);
				free(ot);
				ot = 0;
			}
		}
		ot = ot->next;
	}
	return (start);
}
