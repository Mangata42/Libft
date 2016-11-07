/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nghaddar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 15:40:35 by nghaddar          #+#    #+#             */
/*   Updated: 2016/11/07 16:15:13 by nghaddar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t i;
	size_t y;

	if (!(s1) || !(s2))
		return (NULL);
	i = 0;
	y = ft_strlen(s1);
	while (s2[i] != '\0' && i < n)
	{
		s1[y + i] = (char)s2[i];
		i++;
	}
	s1[i + y] = '\0';
	return (s1);
}
