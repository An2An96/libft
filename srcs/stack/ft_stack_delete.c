/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_delete.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rschuppe <rschuppe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/02 17:25:45 by rschuppe          #+#    #+#             */
/*   Updated: 2019/03/02 17:25:55 by rschuppe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	stack_delete(t_stack *stack)
{
	if (stack)
	{
		if (stack->head)
			free(stack->head);
		free(stack);
	}
}
