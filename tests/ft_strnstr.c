void	test_ft_strnstr()
{
	char *searchingFor = "stackdummy";
	char *in = "la da\ndoo a da\nnow here comes the stack\nok there it was.\n";
	printf("found: %s\n", ft_strnstr(in, searchingFor, 5) ? "yes" : "no");
    printf("found: %s\n", ft_strnstr(in, searchingFor, 5) ? "yes" : "no");
    printf("found: %s\n", ft_strnstr(in, searchingFor, 5) ? "yes" : "no");
}