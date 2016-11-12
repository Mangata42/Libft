/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nghaddar <nghaddar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/12 15:22:36 by nghaddar          #+#    #+#             */
/*   Updated: 2016/11/12 17:20:13 by nghaddar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	size(int n)
{
	int	nb;
	int	size;

	nb = ft_abs(n);
	size = 0;
	while (nb > 0)
	{
		nb = nb / 10;
		size++;
	}
	return (size);
}

static char	*itoa_while(int i, int n, char *ret)
{
	int y;
	int nb;
	int ten;

	y = 0;
	ten = ft_pow(10, size(n));
	while (y < size(n))
	{
		nb = ft_abs(n);
		nb = nb % ten;
		ten = ten / 10;
		nb = nb / ten;
		ret[i] = nb + 48;
		i++;
		y++;
	}
	ret[i] = '\0';
	return (ret);
}

char		*ft_itoa(int n)
{
	char	*ret;
	int		i;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (!(ret = (char *)malloc(sizeof(char) * size(n) + 2)))
		return (NULL);
	i = 0;
	if (n < 0)
	{
		ret[0] = '-';
		i++;
	}
	ret = itoa_while(i, n, ret);
	return (ret);
}
