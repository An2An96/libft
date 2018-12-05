#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	unsigned int 	i;
	size_t			needle_len;

	if (!*needle)
		return ((char*)haystack);
	i = 0;
	needle_len = ft_strlen(needle);
	while (haystack[i] && (i + needle_len) <= len)
	{
		if (ft_strncmp(haystack + i, needle, needle_len) == 0)
			return ((char*)(haystack + i));
		i++;
	}
	return (NULL);
}