/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junhypar <junhypar@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/03 09:42:04 by junhypar          #+#    #+#             */
/*   Updated: 2020/07/03 09:55:42 by junhypar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	start;
	t_list	ot;
	t_list	ot2;

	start = ft_lstnew(f(lst->content));
	if (!start)
		return (NULL);
	ot = lst;
	lst = lst->next;
	del(ot->content);
	free(ot);
	ot = start;
	while (lst)
	{
		ot->next = (ft_lstnew(f(lst->content)));
		ot = ot->next
		ot2 = lst;
		lst = lst->next;
		del(ot2->content);
		free(ot2);
		ot2 = 0;
	}
	return (start);
}
