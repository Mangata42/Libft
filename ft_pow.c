#include "libft.h"

int	ft_pow(int n, int pow)
{
	int i;
	int ret;

	i = 0;
	ret = 1;
	while (i < pow)
	{
		ret = ret * n;
		i++;
	}
	return (ret);
}
