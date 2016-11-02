#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	char		*dest1;
	const char	*src1;
	size_t	i;

	dest1 = dst;
	src1 = src;
	i = 0;
	while (i < n)
	{
		dest1[i] = (char)src1[i];
		if (dest1[i] == (const char)c)
			return ((dst + (i + 1)));
		i++;
	}
	return (NULL);
}
