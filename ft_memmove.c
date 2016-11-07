/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nghaddar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 10:56:04 by nghaddar          #+#    #+#             */
/*   Updated: 2016/11/07 10:58:15 by nghaddar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*dest1;
	const char	*src1;
	size_t		i;

	dest1 = dst;
	src1 = src;
	i = 0;
	while (i < len && src)
	{
		dest1[i] = src1[i];
		i++;
	}
	return (dst);
}
