/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nansonm <nansonm@student.42.kl>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 15:17:35 by nansonm           #+#    #+#             */
/*   Updated: 2022/02/20 15:17:36 by nansonm          ###   ########.kl       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	if (!s)
		return (0);
	i = 0;
	while (s[i])
	{
		if ((s[i]) == (char)c)
			return ((char *)s + i);
		i ++;
	}
	if (s[i] == (char)c)
		return ((char *)s + i);
	return (0);
}
