void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	print(int n)
{
	char	value[2];

	value[0] = ((n / 10) + '0');
	value[1] = ('0' + (n % 10));
	write(1, value, 2);
}

void	ft_print_comb2(void)
{
	int		du_d;
	int		du_e;

	du_d = 0;
	while (du_d <= 98)
	{
		du_e = du_d + 1;
		while (du_e <= 99)
		{
			print(du_d);
			write (1, " ", 1);
			print(du_e);
			du_e++;
			if (du_d != 98)
				write (1, ", ", 2);
		}
	du_d++;
	}
}
int main(void){
	ft_print_comb2();
}