/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rschuppe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/04 13:07:34 by rschuppe          #+#    #+#             */
/*   Updated: 2018/12/04 13:07:35 by rschuppe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int		i;
	int		j;
	char	*res;

	i = 0;
	j = 0;
	while (haystack[i] != '\0')
	{
		if (haystack[i] == needle[j])
		{
			if (j == 0)
				res = (char*)(haystack + i);
			j++;
			if (needle[j] == '\0')
				return (res);
		}
		else
		{
			j = 0;
			res = NULL;
		}
		i++;
	}
	return (NULL);
}
