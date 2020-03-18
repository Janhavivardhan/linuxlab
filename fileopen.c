#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<stdio.h>
#include<errno.h>
int main()
{
int fd,errno,len;
ssize_t ret;
char word[100];
char w[100]="Hello world";
ssize_t nr;
fd=open("/home/sony/statt.txt",O_RDWR);
if(fd==-1)
{
fprintf(stdout,"\nOpen error\n");
}
else
{
fprintf(stdout,"File opened\n");
nr=read(fd,word,100*sizeof(char));
if(nr==-1)
{
fprintf(stdout,"Read error");
}
else
{
fprintf(stdout,word);
len=sizeof(char);
char *buff;
while(len!=0 && (ret=(fd,buff,len)!=0))
{
if(ret==-1)
{
if(errno==EINTR)
continue;
perror("read");
break;
}
len=len-ret;
buff=buff+ret;
}
}
}
}