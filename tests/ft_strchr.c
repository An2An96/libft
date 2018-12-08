

void test_ft_strchr()
{
	char source[] = "http://www.tutorialspoint.com";
	char ch = '.';
	
	if (strcmp(strchr(source, ch), ft_strchr(source, ch)))
	{
		printf("[ft_strchr] Test 1 error\n");
		return;
	}
	if (strcmp(strchr(source, '\0'), ft_strchr(source, '\0')))
	{
		printf("[ft_strchr] Test 2 error\n");
		return;
	}
	printf("[ft_strchr] Tests passed successfully!\n");
}