/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pq_extract.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rschuppe <rschuppe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/28 15:22:09 by wballaba          #+#    #+#             */
/*   Updated: 2019/03/04 12:56:57 by rschuppe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** функция извлекает максимальный элемент (вершину) бинарной кучи
*/

void	*pq_extract(t_pqueue *pqueue)
{
	void	*ret;

	if (!pqueue->length)
		return (NULL);
	ret = pqueue->nodes[0].content;
	pq_swap_node(pqueue, 0, pqueue->length - 1);
	pqueue->length--;
	pq_drowning(pqueue, 0);
	return (ret);
}
