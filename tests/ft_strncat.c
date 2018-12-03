void	test_ft_strncat()
{
	char	src[50] = "This is source",
			dest[50] = "This is destination";

	char	o_src[50] = "This is source",
			o_dest[50] = "This is destination";

	ft_strncat(dest, src, 7);
	strncat(o_dest, o_src, 7);
	if (strcmp(o_dest, dest))
	{
		printf("[ft_strcat] Test 1 error\n");
		return;
	}
	printf("[ft_strcat] Tests passed successfully!\n");
}