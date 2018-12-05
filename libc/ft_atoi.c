/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rschuppe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/05 13:51:56 by rschuppe          #+#    #+#             */
/*   Updated: 2018/12/05 13:51:57 by rschuppe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_is_invisible_char(char c)
{
	return (c == ' ' || c == '\t' || c == '\n'
		|| c == '\v' || c == '\r' || c == '\f');
}

int			ft_atoi(const char *str)
{
	char	negative;
	int		result;
	int		i;
	char	discharge;

	i = 0;
	while (ft_is_invisible_char(str[i]))
		i++;
	if (str[i] == '-')
	{
		negative = 1;
		i++;
	}
	else
		negative = 0;
	result = 0;
	discharge = 0;
	while (ft_isdigit(str[i]))
	{
		if (++discharge > 19)
			return (negative ? (0) : (-1));
		result = (result * 10) + (str[i] - '0');
		i++;
	}
	return (negative ? -result : result);
}
