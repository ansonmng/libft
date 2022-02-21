#include "libft.h"

int	ft_numlen(long nb)
{
	int	len;

	len = 0;
	if (nb < 0)
	{
		nb = nb * -1;
		len++;
	}
	if (nb == 0)
	{
		len ++;
	}
	while (nb > 0)
	{
		nb = nb / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int		len;
	long	nb;
	char	*str;
	int 	i;

	nb = n;
	len = ft_numlen(nb);
	str = (char *)malloc(sizeof(*str) * (len + 1));
	if (!str)
		return (0);
	str[len--] = '\0';
	if (n == 0)
		str[0] = '0';
	while (nb < 0)
	{
		str[len--] = ((nb % 10)* -1) + '0';
		nb /= 10;
	}
	while (nb > 0)
	{
		str[len--] = (nb % 10) + '0';
		nb /= 10;
	}
	if (n < 0)
		str[len] = '-';
	if (n > 0)
		str[len] = nb + '0';
	return (str);
}