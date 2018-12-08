void	test_ft_strlen()
{
	char str1[] = "Hello, world!";
	int res = ft_strlen(str1);
	if (res != 13)
	{
		printf("[ft_strlen] Test 1 error\n");
		return;
	}
	printf("[ft_strlen] Tests passed successfully!\n");
}