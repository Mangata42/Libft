/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nghaddar <nghaddar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 11:52:32 by nghaddar          #+#    #+#             */
/*   Updated: 2016/11/09 12:05:20 by nghaddar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char *mem;

	if (!(mem = (char *)malloc(sizeof(char) * size)))
		return (NULL);
	ft_strclr(mem);
	return (mem);
}
