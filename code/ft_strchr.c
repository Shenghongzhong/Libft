/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szhong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 14:28:43 by szhong            #+#    #+#             */
/*   Updated: 2023/11/15 15:24:17 by szhong           ###   ########.fr       */
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
