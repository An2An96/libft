#include <stdio.h>
#include <string.h>

#include "libft.h"

#include "ft_strlen.c"
#include "ft_strcat.c"
#include "ft_strdup.c"
#include "ft_strncpy.c"
#include "ft_strncat.c"
#include "ft_strlcat.c"
#include "ft_strchr.c"
#include "ft_strrchr.c"
#include "ft_strstr.c"

int	main(int argc, char **argv)
{
	test_ft_strlen();
	test_ft_strcat();
	test_ft_strncat();
	test_ft_strdup();
	test_ft_strncpy();
	test_ft_strlcat();
	test_ft_strchr();
	test_ft_strrchr();
	test_ft_strstr();
	return (0);
}