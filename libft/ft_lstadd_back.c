/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junhypar <junhypar@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/03 09:29:12 by junhypar          #+#    #+#             */
/*   Updated: 2021/04/01 16:40:39 by junhypar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list		*ot;

	if (*lst == NULL)
		*lst = new;
	else
	{
		ot = *lst;
		while (ot->next)
			ot = ot->next;
		ot->next = new;
	}
}
