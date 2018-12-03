#ifndef FN_NAME
	#undef FN_NAME
#endif
#define	FN_NAME		"ft_strlen"

void	test_ft_strlen()
{
	char str1[] = "Hello, world!";
	int res = ft_strlen(str1);
	if (res != 13)
	{
		printf("["FN_NAME"] Test 1 error\n");
		return;
	}
	printf("["FN_NAME"] "SUCCESS_TEST_MSG"");
}