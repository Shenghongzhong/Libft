/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szhong <szhong@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 19:10:42 by szhong            #+#    #+#             */
/*   Updated: 2023/09/12 15:04:49 by szhong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_isalpha(int c)
{
	int	result;

	result = 0;
	if ((c >= 'A' && c <= 'Z'))
		result = 1;
	else if ((c >= 'a' && c <= 'z'))
		result = 1;
	return (result);
}
