/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szhong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 15:28:56 by szhong            #+#    #+#             */
/*   Updated: 2023/11/15 16:22:35 by szhong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (*(needle) == '\0')
		return ((char *)haystack);
	while (*(haystack + i) != '\0' && i < n)
	{
		j = 0;
		while (*(haystack + i + j) == *(needle + j) && \
				i + j < n && *(haystack + i + j) != '\0')
			j++;
		if (*(needle + j) == '\0')
			return ((char *)(haystack + i));
		i++;
	}
	return (0);
}
