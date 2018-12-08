

void test_ft_strrchr()
{
	char source[] = "http://www.tutorialspoint.com";
	char ch = '.';
	
	if (strcmp(strrchr(source, ch), ft_strrchr(source, ch)))
	{
		printf("[ft_strrchr] Test 1 error\n");
		return;
	}
	if (strcmp(strrchr(source, '\0'), ft_strrchr(source, '\0')))
	{
		printf("[ft_strrchr] Test 2 error\n");
		return;
	}
	printf("[ft_strrchr] Tests passed successfully!\n");
}