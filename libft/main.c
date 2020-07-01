#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include "libft.h"

void	freeall(char **outd)
{
	int i;

	i = 0;
	while (outd[i])
	{
		free(outd[i]);
		i++;
	}
	free(outd);
}

int main()
{
	char str1[] = "long time agod....... .........end";
	char str2[] = "0123456789012345678901234567890123456789end";
	char *str3;
	char str4[] = "loned. ";
	char *re;
	char **outa;
//	re = ft_strnstr(str1, "tim", 20);
//	printf("%s\n", re);
//	printf("%d\n%d\n%d\n",ft_atoi("   -20"), ft_atoi(" kk"), ft_atoi("+66"));
//	str3 = ft_strtrim(str1, str4);
//	printf("%s\n",str3);
//	free(str3);
	outa = ft_split(str1, ' ');
	int kk;
	kk = 0;
	while (outa[kk])
	{
		printf("%s\n",outa[kk]);
		kk++;
	}
	freeall(outa);

}
