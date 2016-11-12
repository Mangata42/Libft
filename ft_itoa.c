/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nghaddar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 17:58:11 by nghaddar          #+#    #+#             */
/*   Updated: 2016/11/10 18:39:38 by nghaddar         ###   ########.fr       */

/* ************************************************************************** */

#include "libft.h"

static	int	size(int n)
{
	int	nb;
	int	size;

	nb = abs(n);
	size = 0;
	while (nb > 0)
	{
		nb = nb / 10;
		size++;
	}
	return (size);
}

char	*ft_itoa(int n)
{
	char	*ret;
	int	div;
	int	nb;
	int	i;
	int	y;

	ret = (char *)malloc(sizeof(char) * size(n) + 2);
	i = 0;
	y = 0;
	if (n < 0)
	{
		ret[0] = '-';
		i++;
	}
	div = ft_pow(10, size(n));
	while (y < size(n))
	{
		nb = ft_abs(n);
		nb = nb % div;
		div = div / 10;
		nb = nb / div;
		ret[i] = nb + 48;
		i++;
		y++;
	}
	ret[i] = '\0';
	return (ret);
}
