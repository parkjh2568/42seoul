#include "libft.h"
#include <stdio.h>
int main()
{
	char **a;
	a = ft_split("",'\0');
	int i = 0;
	while (a[i])
	{
		printf("%s\n",a[i]);
		i++;
	}
}
