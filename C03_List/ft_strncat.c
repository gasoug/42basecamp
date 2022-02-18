int	lang(char *tab)
{
	int	i;

	i = 0;
	while (tab[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	int				limit;

	i = 0;
	limit = lang(dest);
	while (src[i] != '\0' && i <= nb)
	{
		dest[limit] = src[i];
		i++;
		limit++;
	}
	dest[limit] = '\0';
	return (dest);
}
