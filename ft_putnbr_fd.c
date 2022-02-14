#include "libft.h"

static int	ft_abs(int nbr)
{
	if (nbr < 0)
		return (-nbr);
	else 
		return (nbr);
}

void	ft_putnbr_fd(int n, int fd)
{
	char s[13];
	int	is_neg;
	int i;

	if (n < 0)
		is_neg = 1;
	ft_bzero(s, 13);
	if (n == 0)
		s[0] = 0;
	i = 0;
	while (n != 0)
	{
		s[i] = '0' + ft_abs(n % 10);
		n = (n / 10);
		i ++;
	}
	if (is_neg)
		s[i] = '-';
	else if (i > 0)
		i --;
	while (i >= 0)
		write(fd, &s[i --], 1);
}
