#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>
int main(){

	char userInput[100];
	read(0,userInput,sizeof(userInput)-1);

	const char *msg="Hello world!\n";
	write(1, userInput, sizeof(userInput)-1);
	
	int fd;
	const char* path="file.txt";
	fd=open(path, O_RDWR | O_CREAT);
	write(fd,userInput,sizeof(userInput)-1);
	lseek(fd,0,SEEK_SET);
	close(fd);
	fd=open("file.txt",O_RDONLY);
	char fileContent[100];
	read(fd,fileContent,99);
	write(1,fileContent,99);

	return 0;
}
