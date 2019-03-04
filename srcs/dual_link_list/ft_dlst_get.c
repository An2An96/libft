/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlst_get.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rschuppe <rschuppe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/04 15:30:12 by rschuppe          #+#    #+#             */
/*   Updated: 2019/03/04 15:38:34 by rschuppe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_dlst_get(t_dlist *list, size_t el_num)
{
	t_node	*cur;
	size_t	i;

	if (list)
	{
		if (el_num < list->size / 2)
		{
			i = 0;
			cur = list->head;
			while (cur)
			{
				if (el_num == i++)
					return (cur->content);
				cur = cur->next;
			}
		}
		else
		{
			i = list->size - 1;
			cur = list->tail;
			while (cur)
			{
				if (el_num == i--)
					return (cur->content);
				cur = cur->prev;
			}
		}
	}
	return (NULL);
}
