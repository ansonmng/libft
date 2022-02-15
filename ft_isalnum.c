#include "libft.h"

int	ft_isalnum(int c)
{
	return ((ft_isalpha(c) == 1 || ft_isdigit(c) == 1) ? 1 : 0);
}
