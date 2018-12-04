/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rschuppe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/03 19:14:25 by rschuppe          #+#    #+#             */
/*   Updated: 2018/12/03 19:14:25 by rschuppe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dest, const char *src, size_t n)
{
	unsigned int	i;
	size_t			src_len;

	i = 0;
	src_len = ft_strlen(src);
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < src_len)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
