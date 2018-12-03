#include <stdio.h>
#include <string.h>

#include "libft.h"

#define SUCCESS_TEST_MSG	"Tests passed successfully!\n"

#include "ft_strlen.c"
#include "ft_strcat.c"
#include "ft_strdup.c"

int	main(int argc, char **argv)
{
	test_ft_strlen();
	test_ft_strcat();
	test_ft_strdup();
	return (0);
}