#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include "libft.h"

int main()
{
	char str1[] = "long time agod................";
	char str2[] = "long time agod.....i..........";
	char *re;

	re = ft_strrchr(str1, '5');
	printf("%s\n", re);
}
