/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pq_extract.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rschuppe <rschuppe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/28 15:22:09 by wballaba          #+#    #+#             */
/*   Updated: 2019/03/02 20:19:52 by rschuppe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** функция извлекает максимальный элемент (вершину) бинарной кучи
*/

void	*pq_extract(t_pqueue *pqueue)
{
	void	*ret;

	ret = pqueue->nodes[0].content;
	pq_swap_node(pqueue, 0, pqueue->length - 1);
	pqueue->length--;
	pq_drowning(pqueue, 0);
	return (ret);
}
