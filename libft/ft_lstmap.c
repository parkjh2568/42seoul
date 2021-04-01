/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junhypar <junhypar@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/03 09:42:04 by junhypar          #+#    #+#             */
/*   Updated: 2020/07/09 22:39:46 by junhypar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	f_ree_list(t_list *start, void (*del)(void *))
{
	t_list *ot;

	while (start)
	{
		ot = start;
		start = start->next;
		del(ot->content);
		free(ot);
		ot = 0;
	}
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*start;
	t_list	*ot;
	t_list	*ot2;

	if (!lst || !f)
		return (NULL);
	start = ft_lstnew(f(lst->content));
	if (!start)
		return (NULL);
	ot = lst->next;
	ot2 = start;
	while (ot)
	{
		ot2->next = (ft_lstnew(f(lst->content)));
		if (!ot2->next)
		{
			f_ree_list(start, del);
			return (NULL);
		}
		ot = ot->next;
		ot2 = ot2->next;
	}
	return (start);
}
