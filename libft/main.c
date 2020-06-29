#include <string.h>
#include <stdio.h>
#include <unistd.h>
extern int ft_memcmp(const void *s1, const void *s2, unsigned int n);
int main()
{
	char str1[] = "long time agod................";
	char str2[] = "long time agod.....i..........";

	printf("%d", ft_memcmp(str1, str2, 20));

}
