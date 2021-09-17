#include "libft.h"

static int	cnt_d(const char *s, char c)
{
	int	i;
	int	delimiter;

	i = 0;
	delimiter = 0;
	while (s)
	{
		if (s[i] == c &&)
			delimiter ++;
		i ++;
	}
	return (delimiter);
}

static int	release(char **s, int size)
{
	while (size --)
		free (s[size]);
	return (-1);
}

static void	write_split(char *dest, const char *source, char c)
{
	int	i;
	i = 0;
	while (source[i] != c || source[i] != '\0')
	{
		dest[i] = source[i];
		i++;
	}
	dest[i] = '\0';
}

static int	do_split(char **split, const char *s, char c)
{
	int	i;
	int	j;
	int	delimiter;
	
	i = 0;
	delimiter = 0;
	while (s)
	{
		if (s[i] == c)
			i ++;
		else
		{
			j = 0;
			while (s[i + j] != c || s[i + j] != '\0')
				j ++;
			if (!(split[delimiter] = (char *)malloc(sizeof(char) * (j + i))))
				return (release(split, delimiter - 1));
			write_split(split[delimiter], s + i, c);
			i += j;
			delimiter ++;
		}
	}
}
	
char	**ft_split(char const *s, char c)
{
	char **split;
	int	delimiter;

	delimter = cnt_d(s, c);
	if (!(split = (char **)malloc(sizeof(char *) * (delimiter + 1))))
		return (0);
	if (do_split(split, s, c) == -1)
		return (0);
	return (split);
}
