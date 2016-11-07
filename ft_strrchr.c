/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nghaddar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 16:27:30 by nghaddar          #+#    #+#             */
/*   Updated: 2016/11/07 18:41:04 by nghaddar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	char	l;
	char	*last;

	i = 0;
	l = (char)c;
	last = NULL;
	if (!(s))
		return (NULL);
	while (i <= ft_strlen((char *)s))
	{
		if ((char)s[i] == l)
			last = (char *)s + i;
		i++;
	}
	return (last);
}
