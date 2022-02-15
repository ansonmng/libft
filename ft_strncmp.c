#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while(s1[i] && s2[i] && i < n)
	{
		if(s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i ++;
	}
	if (n == 0)
		return(0);
}
