#ifndef FN_NAME
	#undef FN_NAME
#endif
#define	FN_NAME		"ft_strcpy"

void	test_ft_strdup()
{
	char src[40];
	char dest[100];

	memset(dest, '\0', sizeof(dest));
	ft_strcpy(src, "This is tutorialspoint.com");
	ft_strcpy(dest, src);

	if (strcmp(dest, "This is tutorialspoint.com"))
	{
		printf("["FN_NAME"] Test 1 error\n");
		return;
	}
	printf("["FN_NAME"] "SUCCESS_TEST_MSG"");
}