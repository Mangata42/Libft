/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nghaddar <nghaddar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 18:43:55 by nghaddar          #+#    #+#             */
/*   Updated: 2016/11/12 20:13:40 by nghaddar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	int i;
	int y;

	i = 0;
	y = 0;
	if ((size_t)ft_strlen(little) == 0)
		return ((char *)big);
	while (big[i] != '\0' && i < len)
	{
		while (little[i] == big[y] && y < len_
		{
			i++;
			y++;
			if (y == (size_t)ft_strlen(little))
				return ()
		}

	}
	return (NULL);
}
