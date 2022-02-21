/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nansonm <nansonm@student.42.kl>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 15:04:28 by nansonm           #+#    #+#             */
/*   Updated: 2022/02/20 15:04:30 by nansonm          ###   ########.kl       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	size_t	i;
	size_t	j;
	size_t	size;

	i = -1;
	size = ft_strlen(needle);
	if (!size)
		return ((char *)haystack);
	while (haystack[++i] && i < n)
	{
		j = 0;
		while ((needle[j] == haystack[i + j]) && (i + j < n))
		{
			if (j == size - 1)
				return ((char *)(haystack + i));
			j++;
		}
	}
	return (NULL);
}
