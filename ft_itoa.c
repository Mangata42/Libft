/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nghaddar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 17:58:11 by nghaddar          #+#    #+#             */
/*   Updated: 2016/11/10 18:39:38 by nghaddar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		size(int n)
{
	int	nb;
	int	size;

	nb = n;
	size = 0;
	while (nb > 0)
	{
		nb = nb / 10;
		size++;
	}
	size += 2;
	return (size);
}

char	*ft_itoa(int n)
{
	char	*ret;
	int		nb;
	int		dec;
	int		ent;
	int		div;
	int		i;

	if (!(ret = (char *)malloc(sizeof(char) * size(n))))
		return (NULL);
	i = 0;
	div = 10;
	ent = 1;
	while (ent > 0)
	{
		dec = nb % div;
		nb = n;
		ent = nb / div;
		div *= 10;
		printf("%d\n", dec); 
	}
	return (NULL);
}

int		main(int argc, char **argv)
{
	ft_itoa(ft_atoi(argv[1]));
	return (0);
}
