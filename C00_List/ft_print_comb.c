void	ft_print_comb(void)
{
	char	num[3];

	num[0] = '0';
	while (num[0] <= '7')
	{
		num[1] = num[0] +1;
		while (num[1] <= '8')
		{
			num[2] = num[1] +1;
			while (num[2] <= '9')
			{
				write(1, &num[0], 1);
				write(1, &num[1], 1);
				write(1, &num[2], 1);
				if (num[0] != '7')
					write(1, ", ", 2);
				num[2]++;
			}
		num[1]++;
		}
	num[0]++;
	}	
}
