void	test_ft_strlcat()
{
	char	src[50] = "This is source",
			dest[50] = "This is destination";

	char	o_src[50] = "This is source",
			o_dest[50] = "This is destination";

	int r1 = ft_strlcat(dest, src, 25);
	int r2 = strlcat(o_dest, o_src, 25);
	if (strcmp(o_dest, dest) || r1 != r2)
	{
		printf("[ft_strlcat] Test 1 error\n");
		return;
	}
	printf("[ft_strlcat] Tests passed successfully!\n");
}