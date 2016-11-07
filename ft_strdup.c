/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nghaddar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 11:40:35 by nghaddar          #+#    #+#             */
/*   Updated: 2016/11/07 12:31:00 by nghaddar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*out;
	int		i;

	if (!(s1))
		return (NULL);
	if (!(out = (char *)malloc(sizeof(char) * ft_strlen((char *)s1) + 1)))
		return (NULL);
	i = 0;
	while ((char)s1[i] != '\0')
	{
		out[i] = (char)s1[i];
		i++;
	}
	out[i] = '\0';
	return (out);
}
