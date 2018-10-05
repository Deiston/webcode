#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
int main()
{
pid_t pid=fork();
if(pid==0)
{
printf("This is a child process\n");
}
else
{
printf("This is a parent process\n");
}
return 0;
}
