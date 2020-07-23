#include "get_next_line.h"
#include <fcntl.h>
#include <stdio.h>
int main()
{
	int fd;
	char *li;
	fd = open("e",O_RDONLY);
	while (get_next_line(fd, &li) >0)
	{
	printf("%s\n",li);
	free(li);
	}
	close(fd);
	free(li);
}
