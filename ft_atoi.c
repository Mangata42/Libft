/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nghaddar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 12:11:53 by nghaddar          #+#    #+#             */
/*   Updated: 2016/11/08 13:03:07 by nghaddar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int i;
	int	ret;

	ret = 0;
	if (!(str))
		return (0);
	(str[0] == '-') ? (i = 1) : (i = 0);
	while (str[i] != '\0')
	{
		ret = ret + (str[i] - 48);
		ret = ret * 10;
		i++;
	}
	ret = ret / 10;
	return (ret);
}

int		main(int argc, char **argv)
{
	printf("%d\n", ft_atoi(argv[1]));
	return (0);
}
