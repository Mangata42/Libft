/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nghaddar <nghaddar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 16:33:41 by nghaddar          #+#    #+#             */
/*   Updated: 2016/11/07 18:49:41 by nghaddar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *big, const char *little)
{
	size_t	i;
	size_t	y;

	if (!(big) || !(little))
		return (NULL);
	if (ft_strlen((char *)little) == 0)
		return ((char *)big);
	i = 0;
	y = 0;
	while (big[i] != '\0')
	{
		while (big[i] == little[y])
		{
			i++;
			y++;
		}
		if (y == (size_t)ft_strlen((char *)little))
			return ((char *)big + (i - y));
		i = (i - y) + 1;
		y = 0;
	}
	return (NULL);
}
