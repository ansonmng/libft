#include "libft.h"

static int	ft_abs(int nbr)
{
	if (nbr < 0)
		return (-nbr);
	else
		return (nbr);
}

static void	ft_strrev(char *str)
{
	size_t len;
	size_t i;
	char tmp;

	len = ft_strlen(str);
	i = 0;
	while (i < len / 2)
	{
		tmp = str[i];
		str[i] = str [len - i - 1];
		str[len - i - 1] = tmp;
		i ++;
	}
}

char *ft_itoa(int n)
{
	char *str;
	int	is_neg;
	size_t i;

	if (n < 0)
		is_neg = 1;
	else 
		is_neg = 0;
	if (!(str = ft_calloc(11 + is_neg, sizeof(*str))))
		return (0);
	if (n == 0)
		str[0] = '0';
	i = 0;
	while (n != 0)
	{
		str[i] = ft_abs(n % 10) + '0';
		n = n / 10;
		i ++;
	}
	if (is_neg)
		str[len] = '-';
	ft_strrev(str);
	return (str);
}
