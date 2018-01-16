#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

#define BUFSIZE 32

int main(int argc, char **argv)
{
	int rfd,wfd,cnt;
	char buf[BUFSIZE] = {};
	if(argc < 3)
		return -1;
	rfd = open(argv[1], O_RDONLY);
	if (rfd < 0)
	{
		perror("open()");
		goto ERROR1;
	}
	wfd = open(argv[2], O_RDONLY | O_CREAT, 0666);
	if (wfd < 0)
	{
		perror("open()");
		goto ERROR2;
	}
	while(1)
	{
		cnt = read(rfd, buf, BUFSIZE);
		if (cnt < 0)
		{
			perror("read()");
			goto ERROR3;
		}else if (cnt == 0)
		{
			break;
		}
		write(wfd, buf, cnt);
	}
	close(wfd);
	close(rfd);
	return 0;
ERROR3:
	close(wfd);
ERROR2:
	close(rfd);
ERROR1:
	return 1;
}
