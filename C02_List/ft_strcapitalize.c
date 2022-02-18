char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	signal;

	signal = 1;
	i = 0;
	ft_strlowcase(str);
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (signal == 1)
				str[i] -= 32;
			signal = 0;
		}
		else if (str[i] >= '0' && str[i] <= '9')
			signal = 0;
		else
			signal = 1;
		i++;
	}
	return (str);
}
