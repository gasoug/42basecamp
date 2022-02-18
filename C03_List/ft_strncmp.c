int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	int				comp;

	i = 0;
	if (n == 0)
	{
		return (0);
	}
	while ((s1[i] != '\0' || s2[i] != '\0') && n > 0)
	{
		if (s1[i] == s2[i])
		{
			i++;
			n--;
		}
		else
		{
			comp = s1[i] - s2[i];
			i++;
			n--;
			return (comp);
		}
	}
	return (0);
}
