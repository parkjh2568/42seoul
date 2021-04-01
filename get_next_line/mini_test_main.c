#include "get_next_line.h"
#include <fcntl.h>
#include <stdio.h>
int main(int argc, char *argv[])
{
	int fd;
	char *li;

	if (argc == 2)
	{
		fd = open(argv[1],O_RDONLY);
		if (fd > 0)
		{
			while (get_next_line(fd, &li) >0)
			{
				printf("%s\n",li);
				free(li);
			}
			free(li);
		}
		else
			printf("No file or Non file or Wrong input\n");
		close(fd);
	}
	else
		printf("No file or Non file or Wrong input\n");
}
