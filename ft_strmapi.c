#include "libft.h"

char  *ft_strmapi(const char *s, char (*f)(unsigned int, char)
{
	char *str;
	size_t i;

	if (!(str = ft_strdup(s)))
		return (0);
	while (str[i])
	{
		str[i] = (*f)(i, str[i]);
		i ++;
	}
	return (str);
}
