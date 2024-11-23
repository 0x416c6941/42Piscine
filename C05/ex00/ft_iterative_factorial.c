int	ft_iterative_factorial(int nb)
{
	int	retval;

	if (nb < 0)
		return (0);
	retval = 1;
	while (nb)
		retval *= nb--;
	return (retval);
}
