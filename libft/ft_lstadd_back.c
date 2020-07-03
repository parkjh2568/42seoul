/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junhypar <junhypar@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/03 09:29:12 by junhypar          #+#    #+#             */
/*   Updated: 2020/07/03 09:31:34 by junhypar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list ot;

	if (*alst == NULL)
		*alst = new;
	else
	{
		ot = *alst;
		while (ot->next)
			ot = ot->next;
		ot->next = new;
	}
}
