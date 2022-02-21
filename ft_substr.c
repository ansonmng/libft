/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nansonm <nansonm@student.42.kl>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 15:15:10 by nansonm           #+#    #+#             */
/*   Updated: 2022/02/20 15:15:11 by nansonm          ###   ########.kl       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*str;
	int		flag;

	flag = 0;
	str = (char *)malloc(sizeof(*s) * (len + 1));
	if (!str)
		return (0);
	i = 0;
	j = 0;
	while (s[i])
	{
		if (i == start)
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
