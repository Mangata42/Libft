#include "libft.h"

int	ft_abs(int n)
{
	(n < 0) ? (n *= -1) : (n *= 1);
	return (n);
}
