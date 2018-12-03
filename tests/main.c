#include <stdio.h>
#include <string.h>

#include "libft.h"

#include "ft_strlen.c"
#include "ft_strcat.c"
#include "ft_strdup.c"
#include "ft_strncpy.c"
#include "ft_strncat.c"

int	main(int argc, char **argv)
{
	test_ft_strlen();
	test_ft_strcat();
	test_ft_strncat();
	test_ft_strdup();
	test_ft_strncpy();
	return (0);
}