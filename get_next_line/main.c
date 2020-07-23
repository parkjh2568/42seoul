#include "get_next_line.h"
#include <fcntl.h>
#include <stdio.h>
int main()
{
	int fd;
	char *li;
	li = malloc(sizeof(char));
	li[0] = '1';
	fd = open("c.txt",O_RDONLY);
	get_next_line(fd, &li);
	printf("\nresult = %s\n",li);
	free(li);
	get_next_line(fd, &li);
	printf("\nresult = %s\n",li);
	free(li);
	get_next_line(fd, &li);
	printf("\nresult = %s\n",li);
	free(li);
	get_next_line(fd, &li);
	printf("\nresult = %s\n",li);
	free(li);
	get_next_line(fd, &li);
	printf("\nresult = %s\n",li);
	free(li);
	get_next_line(fd, &li);
	printf("\nresult = %s\n",li);
	free(li);
	get_next_line(fd, &li);
	printf("\nresult = %s\n", li);
	close(fd);
	free(li);
}
