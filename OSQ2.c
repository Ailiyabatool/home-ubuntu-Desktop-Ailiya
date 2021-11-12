#include<stdio.h>
#include<sys/wait.h>
#include<unistd.h>

int main(void)
{
int pid, status;
pid = fork();
if(pid==0)
{
int num=0; //CHild PROCESS

for(int i=1; i<=10; i++){
  printf("%d x %d = %d\n",num,i,num*i);
}
}
else{ //Parent Process
wait(&status);
printf("In the parent Process :/n Name is Ailiya and CNIC is 35043-1233456-0 is \n");
}
return 0;
}