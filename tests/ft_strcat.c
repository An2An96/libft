void	test_ft_strcat()
{
	char	src[50] = "This is source",
			dest[50] = "This is destination";

	char	o_src[50] = "This is source",
			o_dest[50] = "This is destination";

	ft_strcat(dest, src);
	strcat(o_dest, o_src);
	if (strcmp(o_dest, dest))
	{
		printf("[ft_strcat] Test 1 error\n");
		return;
	}
	printf("[ft_strcat] Tests passed successfully!\n");
}