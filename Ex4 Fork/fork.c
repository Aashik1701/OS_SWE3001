#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
int main() {
fork();
fork();
fork();

printf("this process is created by fork() system call\n");
} 


