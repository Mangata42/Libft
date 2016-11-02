#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*dest1;
	const char	*src1;
	size_t	i;

	dest1 = dst;
	src1 = src;
	i = 0;
	while (i < len && src)
	{
		dest1[i] = src1[i];
		i++;
	}
	return (dst);
}
