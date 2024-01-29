#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
//main function begins
int main(){
pid_t p= fork(); //calling of fork system call
int x=3;
if(p==0)
printf("In the child, the value of x is %d\n", ++x);
else
printf("In the parent, the value of x is %d\n", - - x);
return 0;
}
