void ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		nb = 147483648;
	}

	else if (nb < 0)
	{
		ft_putchar('-');
		nb *= 1;
	}

	
}
