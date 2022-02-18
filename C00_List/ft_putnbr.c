void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putnbr(int nb)
{
	char	result[10];
	int		cont;

	cont = 0;
	while (nb > 0)
	{
		result[cont] = (nb % 10) + '0';
		nb /= 10;
		cont++;
	}
	while (cont > 0)
	{
		write(1, &result[cont - 1], 1);
		cont--;
	}
}
