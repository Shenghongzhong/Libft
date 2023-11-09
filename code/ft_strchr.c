/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szhong <szhong@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 21:57:06 by szhong            #+#    #+#             */
/*   Updated: 2023/11/08 14:42:42 by szhong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*src;
	char	target;

	src = (char *)s;
	target = (char )c;
	while (*src && *src != target)
		src++;
	if (*src == target)
		return (src);
	return (0);
}
/*
// the problem with this function was the error
// ft_strchr.c:38:32: error: return discards ‘const’ qualifier from pointer target type [-Werror=discarded-qualifiers]
char	*ft_strchr(const char *s, int c)
{
	char	*src;
	char	target;

	src = (char *)s;
	target = (char )c;
	while (*src && target != '\0')
	{
		if (*src == target)
			return (const src);
		src++;
	}
	return (0);
}*/
