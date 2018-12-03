#ifndef FN_NAME
	#undef FN_NAME
#endif
#define	FN_NAME		"ft_strdup"

void	test_ft_strdup()
{
	char *p;
	char str[80];

	strcpy(str, "this is a test");
	p = ft_strdup(str);
	if (strcmp(p, "this is a test"))
	{
		printf("["FN_NAME"] Test 1 error\n");
		return;
	}
	printf("["FN_NAME"] "SUCCESS_TEST_MSG"");
}