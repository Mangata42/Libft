
// REQUIRED LIBS
#include <stdlib.h>
#include <unistd.h>

// TEST LIBS
#include <string.h>
#include <stdio.h>
#include <string.h>

void	*ft_memset(void *b, int c, size_t len);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memccpy(void *dst, const void *stc, int c, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t len);
void	*memchr(const void *s, int c, size_t n);
int		memcmp(const void *s1, const void *s2, size_t n);
