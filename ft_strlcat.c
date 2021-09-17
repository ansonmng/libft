#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t i;
	size_t j;
	size_t dest_length;
	size_t src_length;
	
	dest_length = 0;
	while (dst[dest_length] != '\0')
		dest_length ++;
	src_length = 0;
	while (src[src_length] != '\0')
		src_length ++;
	j = dest_length;
	i = 0;
	if (dest_length < size - 1 && size > 0)
	{
		while (src[i] && dest_length + i < size -1)
		{
			dst[j] = src[i];
			j ++;
			i ++;
		}
		dst[j] = 0;
	}
	if (dest_length >= size)
		dest_length = size;
	return (dest_length + src_length);
}

