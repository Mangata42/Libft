/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nghaddar <nghaddar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 12:11:53 by nghaddar          #+#    #+#             */
/*   Updated: 2016/11/14 13:09:56 by nghaddar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	size_t	i;
	int		neg;
	int		ret;

	i = 0;
	neg = 1;
	ret = 0;
	while (ft_isblank(str[i]) == 1)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		(str[i] == '-') ? (neg *= -1) : (neg *= 1);
		i++;
	}
	while (ft_isdigit(str[i]) == 1 && str[i] != '\0')
	{
		ret *= 10;
		ret += str[i] - 48;
		i++;
	}
	(neg == -1) ? (ret *= -1) : (ret *= 1);
	return (ret);
}
