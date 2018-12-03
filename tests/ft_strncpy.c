void	test_ft_strncpy()
{
	char str[] = "Hello, world!";
	char buf[10] = {0};                  // буфер размером меньше строки
	//printf("строка: \"%s\"\n\n", str);
	//printf("буфер перед копированием: \"%s\"\n", buf);
	ft_strncpy(buf, str, sizeof(buf) - 1);   // len на 1 меньше размера буфера
	//printf("буфер после копирования:  \"%s\"\n", buf);


	if (strcmp(buf, "Hello, wo"))
	{
		printf("[ft_strncpy] Test 1 error\n");
		return;
	}
	printf("[ft_strncpy] Tests passed successfully!\n");
}