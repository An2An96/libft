#ifndef FN_NAME
	#undef FN_NAME
#endif
#define	FN_NAME		"ft_strcat"

void	test_ft_strcat()
{
	char	src[50] = "This is source",
			dest[50] = "This is destination";

	ft_strcat(dest, src);
	if (strcmp("This is destinationThis is source", dest))
	{
		printf("["FN_NAME"] Test 1 error\n");
		return;
	}
	printf("["FN_NAME"] "SUCCESS_TEST_MSG"");
}