/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtim.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nghaddar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 14:03:42 by nghaddar          #+#    #+#             */
/*   Updated: 2016/11/09 15:20:24 by nghaddar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	check_symbol(const char c)
{
	if (c == '\t' || c == '\n' || c == ' ' || c == ',')
		return (1);
	else
		return (0);
}

char		*ft_strtrim(char const *s)
{
	char	*mem;
	size_t	i;
	size_t	y;
	size_t	z;

	if (!(s))
		return (NULL);
	if (!(mem = (char *)malloc(sizeof(char) * ft_strlen((char *)s) + 1)))
		return (NULL);
	i = 0;
	y = ft_strlen((char *)s) - 1;
	while (s[i] != '\0' && check_symbol(s[i]) == 1)
		i++;
	while (check_symbol(s[y]) == 1)
		y--;
	z = 0;
	while (i <= y)
	{
		mem[z] = s[i];
		i++;
		z++;
	}
	mem[z] = '\0';
	return (mem);
}
