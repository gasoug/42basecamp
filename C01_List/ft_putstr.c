void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}
int	main(void)
{
	char word[] = {'p', 'o', 'n', 't', 'e', 'i', 'r', 'o',' ',
	'c', 'h', 'a', 't', 'o'};
	ft_putstr(&word[0]);
}
