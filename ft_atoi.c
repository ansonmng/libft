#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	is_neg;
	int	result;

	if (!str)
		return (0);
	i = 0;
	while (str[i] == '\t' ||str[i] == '\n' || str[i] == '\v' ||
			str[i] == '\f' || str[i] == '\r' || str[i] == ' ')
		i ++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')	
		{
			is_neg *= -1;
		}
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
		res = (res * 10) + (str[i ++] - '0');
	return (res * is_neg);
}
