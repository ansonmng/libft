#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	if (!s)
		return (0);
	i = 0;
	while (i < n)
	{
		if(*(unsigned char *)(s + i) == (unsigned char)c)
			return ((void *)s + i);
		i ++;
	}
	return (0);
}
