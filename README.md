ft_memchr

	char s[] = {0, 1, 2 ,3 ,4 ,5};
	char *p = ft_memchr(s, 2 + 256, 3);
	char *p1 = memchr(s, 2 + 256, 3);

ft_memcmp

	char s2[] = {0, 10, 127, 0};
	char s3[] = {0, 0, 42, 0};

	printf("num1 = %d\n", ft_memcmp(s2, s3, 5));
	printf("num2 = %d", memcmp(s2, s3, 5));

ft_strchr

	char s[] = "tripouille";
	write(1, ft_strchr(s, 't' + 256), 10);
	write(1, "\n", 1);
	write(1, strchr(s, 't' + 256), 10);
ft_strtrim

	write(1, ft_strtrim(NULL, NULL), 1);

ft_striteri, ft_lstclear ,ft_lstdelone, ft_putstr_fd, ft_putendl_fd
	not protected from null pointer
