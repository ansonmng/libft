#include "libft.h"

char	*ft_itoa(int n)
{
	int		len;
	long	nb;
	char	*str;
	
	nb = n;
	len = ft_numlen(nb, 10);
	if (!(str = (char*)malloc(sizeof(*str) * (len + 1))))
		return (0);
	str[len--] = '\0';
	str[0] = (n == 0 ? '0' : '-');
	if (n < 0)
		nb = -nb;
	while (nb > 0)
	{
		str[len--] = (nb % 10) + '0';
		nb /= 10;
	}
	return (str);
}
