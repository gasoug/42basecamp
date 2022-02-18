int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	comp;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] == s2[i])
		{
			i++;
		}
		else
		{
			comp = s1[i] - s2[i];
			return (comp);
			i++;
		}
	}
	return (0);
}
