#include <stdio.h>
#include <string.h>
#include <limits.h>

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
#include "ft_strnstr.c"
#include "test_atoi.c"

#define		STRING_1	"the cake is a lie !\0I'm hidden lol\r\n"	//	19	
#define		STRING_4	"phrase differente pour le test"
#define		STRING_2	"there is no stars in the sky"				//	28
#define		STRING_3	"test basic !"

char			f_strmap(char c) { return (c + 7); }

static char	*str = "Un jour je serai, le meilleur dresseur !";

int	main(int argc, char **argv)
{
	test_ft_strlen();
	test_ft_strcat();
	test_ft_strncat();
	test_ft_strdup();
	test_ft_strncpy();
	//test_ft_strlcat();
	test_ft_strchr();
	test_ft_strrchr();
	test_ft_strstr();
	test_ft_strnstr();
	ft_atoi_test();

	char	s1[4] = "";
	char	s2[4] = "";
	size_t r1 = strlcat(s1, "thx to ntoniolo for this test !", 0);
	size_t r2 = ft_strlcat(s2, "thx to ntoniolo for this test !", 0);
	printf("%s (%zu) | %s (%zu)\n", s1, r1, s2, r2);
	return (0);
}