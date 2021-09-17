#include "libft.h"
#include <stdio.h>

int	main(int argc, char const *argv[])
{
	int 	i;
	(void)	argc;
	(void)	argv;
	char d[200] = "";
	char ft_d[200] = "";


	printf("---isalpha--");
	printf("%d\n", ft_isaplha(32));
	printf("---isdigit--");
	printf("%d\n", ft_isdigit(32));
	printf("---isalnum--");
	printf("%d\n", ft_isalnum(32));
	printf("---isascii--");
	printf("%d\n", ft_isascii(32));
	printf("---isprint--");
	printf("%d\n", ft_isprint(32));
	printf("---strlen---");
	i = 0;
	while (i++ < argc)
	{
		if(ft_strlen(argv[i] == strlen(argv[i])))
			printf("OK!");
		else
			printf("NO!");
	}
	printf("\n");

	printf("--- memset ---");
	i = 0;
	while (i < argc)
	{
		memset(d, argv[i][0], 20);
		ft_memset(ft_d, argv[i][0],20);
		if (strcmp(d, ft_d) == 0)
				printf("OK!");
		else
				printf("NO");
		i ++;
	}

	printf("--- bzero ---");
	char *str_bzero = NULL;
	char *ft_str_bzero = NULL;
	int	min_length;
	i = 0;
	while (i < argc)
	{
		str_bzero = ft_strdup(argv[i]);
		ft_str_bzero = ft_strdup(argv[i]);
		min_length = min(strlen(argv[i],5));
		bzero(str_bzero, min_length);
		ft_bzero((void *)ft_str_bzero, min_length);
		if(memcp(str_bzero, ft_str_bzero, min_length) == 0)
			printf("OK!");
		else
			printf("NO");
		free(str_bzero);
		free(ft_str_bzero);
		i ++;
	}
	printf("\n");

	printf("--- memcpy from d to s---");
	int	memcpy_len = 0;
	i = 0;
	while (i < argc)
	{
		memcpy_len = strlen(argv[i]);
		memcpy(d, argv[i], memcpy_len);
		ft_memcpy(ft_d, argv[i], memcpy_len);
		if (strcmp(d, ft_d) == 0)
			printf("OK!");
		else
			printf("NO");
		i ++;
	}
	printf("\n");

	printf("--- memmove---");
	int	memmove_len = 0;
	i = 0;
	while (i < argc)
	{
		memmove_len = strlen(argv[i]);
		memmove(d, argv[i], memmove_len);
		ft_memmove(ft_d, argv[i], memmove_len);
		if (strcmp(d, ft_d) == 0)
			printf("OK!");
		else
			printf("NO");
		i ++;
	}
	printf("\n");

	printf("----strlcpy---")i
	char	str[2550] = "";
	char	ft_str[2550] = "";
	int	res;
	int	ft_res;

	i =0;
	while (i < argc)
	{
		res = strlcpy(str, argv[i], 5);
		ft_res = ft_strlcpy	(ft_str, argv[i], 5);
		if (res == ft_res)
			printf("OK!");
		else
			printf("NO");
		i ++;
	}
	printf("\n");

	printf("---strlcat----");
	i = 0;
	while (i < argc)
	{
		res = strlcat(str, argv[i], 5);
		ft_res = ft_strlcat(ft_str, argv[i], 5);
		if (res == ft_res)
			printf("OK!");
		else
			printf("NO");
		i ++;	
	}
	printf("\n");

	printf("---toupper---");
	printf("%d", ft_toupper(97));

	printf("---tolower---");
	printf("%d", ft_tolower(65))

	printf("---strchr---");
	i = 0;
	while (i < argc)
	{
		if (strchr(argv[i], 'c') == ft_strchr(argv[i], 'c'))
			printf("OK!");
		else
			printf("NO");
		i ++;
	}
	printf("\n");

	printf("---strrchr---")
	i = 0;
	while (i < argc)
	{
		if(strrchr(argv[i], 'c') == ft_strrchr(argv[i], 'c'))
			printf("OK!");
		else
			printf("NO");
		i ++;
	}
	printf("\n");

	printf("---strncmp---");
	i = 0;

	while (i < argc)
	{
		res = strncmp(argv[i], argv[i], 20);
		ft_res = ft_strncmp(argv[i], argv[i],20);
		if (res == ftr_res)
			printf("OK!");
		else 
			printf("NO");
		i ++;
	}
	printf("\n");

	printf("---memchr---");
	i = 0;
	while (i < argc)
	{
		if (memchr(argv[i], 'c', 20) == ft_memchr(argv[i], 'c', 20)
			printf("OK!");
		else
			printf("NO");
		i ++;
	}
	printf("\n");

	printf("---memcmp---");
	i = 0;
	while (i < argc)
	{
		if(memcmp(argv[i], argv[i], 20) == ft_mcmcmp(argv[i], argv[i], 20))
			printf("OK!");
		else
			printf("NO");
		i ++;
	}
	printf("\n");

	printf("---strnstr---");
	i = 0;
	while (i < argc)
	{
		if (strnstr(argv[i], argv[i], 20) == ft_strnstr(argv[i], argv[i], 20)
			printf("OK!");
		else
			printf("NO");
		i ++;
	}
	printf("\n");

	printf("---atoi---");
	i = 1;
	while (i < argc)
	{
		if(atoi(argv[i]) == ft_atoi((char *) argv[i]))
			printf("OK");
		else
			printf("NO");
		i ++;
	}
	printf("\n");

	printf("---calloc---");
	char	*str_calloc = NULL;
	int		calloc_len = 0;
	int		j;

	i = 0;
	while (i < argc)
	{
		calloc_len = strlen(argv[i]) + 1;
		str_calloc = (char *)ft_calloc(calloc_len, sizeof(*str_calloc));
		if (str_calloc)
		{
			j = 0;
			while (j < calloc_len)
				if(str_calloc[j++])
					break;
			if (j == calloc_len)
				printf("OK!");
			else
				printf("NO");
			free(str_calloc);
		}
		str_calloc = NULL;
		i ++;
	}
	printf("\n");

	printf("---strdup---")
	char *strdup = NULL;
	char *ft_strdup = NULL;

	i = 0;
	while (i < argc)
	{
		strdup = strdup(arvc[i]);
		ft_strdup = ft_strdup(argv[i]);
		if (strcmp(strdup, ft_strdup) == 0)
			printf("OK!");
		else
			printf("NO");
		free(strdup);
		free(ft_strdup);
		i ++;
	}
	printf("\n");
	
	printf("---substr---");
	char *substr = ft_substr(argv[i], 3, strlen(argv[i]));
	i = 0;
	while (substr[i])
	{
		printf("%s", substr[i]);
		i ++;
	}
	printf("\n");

	printf("---strjoin---")
	





	return 0;
}
