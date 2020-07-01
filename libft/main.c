#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include "libft.h"

int main()
{
	char str1[] = "long time agod................";
	char str2[] = "0123456789012345678901234567890123456789";
	char *re;

//	re = ft_strnstr(str2, "..i", 20);
//	printf("%s\n", re);
//	printf("%d\n%d\n%d\n",ft_atoi("   -20"), ft_atoi(" kk"), ft_atoi("+66"));
	printf("%s\n",ft_memccpy(str1, str2, '6', 20));
	printf("%s\n",str1);
}
