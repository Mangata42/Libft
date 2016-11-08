/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nghaddar <nghaddar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 12:16:58 by nghaddar          #+#    #+#             */
/*   Updated: 2016/11/08 11:59:36 by nghaddar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy(char *dst, const char *src)
{
	int i;

	i = 0;
	if (!(dst) || !(src))
		return (NULL);
	while (src[i] != '\0')
	{
		dst[i] = (char)src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}
