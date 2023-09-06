#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>

int main(void)
{
	int fd, w, r;
	char *buffer;

	fd = open("txte.c", O_RDONLY);
	if (fd == -1)
	{
		printf("the file doesn't open\n");
		return (-1);
	}
	printf("file open successfuly\n");
	printf("%d\n", fd);
	
	
	buffer = malloc(strlen("Hello les guys\n") + 1);
	if (buffer == NULL)
	{
		close(fd);
		return (-1);
	}
	r = read(fd, buffer, 16);
	buffer[r] = '\0';
	printf("this what i write in my opened file:\n%s\n", buffer);
	free(buffer);
	close(fd);
	return (0);
}