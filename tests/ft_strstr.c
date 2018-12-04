

void test_ft_strstr()
{
	char source[] = "http://www.tutorialspoint.com";
	char ch[] = "tutorials";
	
	char str1[11] = "0123456789";
   	char str2[10] = "345";

	if ((ft_strstr(str1, str2) - str1 + 1 ) != (strstr(str1, str2) - str1 + 1 ))
	{
		printf("[ft_strstr] Test 1 error\n");
		return;
	}
	if (strcmp(strstr(source, ch), ft_strstr(source, ch)))
	{
		printf("[ft_strstr] Test 2 error\n");
		return;
	}
	printf("[ft_strstr] Tests passed successfully!\n");
}