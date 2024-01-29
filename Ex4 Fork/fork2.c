#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
//main function begins
int main(){
pid_t p= fork(); //calling of fork system call
if(p==-1)
printf("Error occured while calling fork()\n");
else if(p==0)
printf("This is the child process\n");
else
printf("This is the parent process\n");
return 0;
}
