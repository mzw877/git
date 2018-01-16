#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#define BUFSIZE 32

int main(int argc, char **argv)
{
	int rfd, wfd, cnt, hfd;
	int num = 0;
	char *p = NULL;
	char buf[BUFSIZE] = {};
	if (argc < 3)
		return -1;
	rfd = open(argv[1], O_RDONLY);
	if (rfd < 0)
	{
		perror("open()");
		goto ERROR1;
	}
	wfd = open(argv[2], O_WRONLY);
	if (wfd < 0)
	{
		perror("open()");
		goto ERROR2;
	}	
	hfd = open(hw, O_RDWR | O_CREAT);
	if (hfd < 0)
	{
		perror("open()");
		goto ERROR3;
	}

	while(1)
	{
		cnt = read(rfd, buf, BUFSIZE);
		if (cnt < 0)
		{
			perror("read()");
			goto ERROR4;
		}else if (cnt == 0)
		{
			break;	
		}
		write(hfd, buf, cnt);
		if (num < 2)
		{
			p = strchr(buf, '\n');
			if (p != NULL)
			{
				num++;
				cnt = BUFSIZE -(p - buf);
				lseek(rfd, -1 * cnt, SEEK_CUR);
				continue;
			}
		}
		write(wfb, buf, cnt);
	}
	close(wfd);
	close(rfd);
	return 0;
ERROR4:
	close(wfd);
ERROR3:
	close(hfd);
ERROR2:
	close(rfd);
ERROR1:
	return 1;
}
