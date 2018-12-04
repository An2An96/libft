#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	unsigned int	i;
	unsigned int	j;
	char			*res;

	i = 0;
	j = 0;
	while (haystack[i] != '\0')
	{
		if (haystack[i] == needle[j])
		{
			if (j == 0)
				res = (char*)(haystack + i);
			j++;
			if (j == len || needle[j] == '\0')
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