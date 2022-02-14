#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t i;
	size_t j;
	char *str;
	int flag = 0;

	str = (char *)malloc(sizeof(*s) * (len + 1));

	if (!str)
		return (0);
	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] == start)
			flag = 1;
		if (flag == 1 && j < len)
		{
			str[j] = s[i];
			j ++;
		}
		i ++;
	}
	str[j] = 0;
	return (str);
}
