void	test_ft_strdup()
{
	char *p;
	char str[80];

	strcpy(str, "this is a test");
	p = ft_strdup(str);
	if (strcmp(p, "this is a test"))
	{
		printf("[ft_strdup] Test 1 error\n");
		return;
	}
	printf("[ft_strdup] Tests passed successfully!\n");
}