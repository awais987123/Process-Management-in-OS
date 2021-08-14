#include<stdio.h>
#include<stdlib.h>
#include<sys/wait.h>
#include<sys/types.h>
#include<unistd.h>
int main()
{
pid_t pid=fork(); 
int number ;
if(pid==0) 
{
do{
printf("Enter the number = ");
scanf("%d",&number);
}while(number<=0);
printf("Child process is working...\n ");
printf("%d",number);
while(number!=1)
0
{
if(number%2==0)
{
number=number/2;
}
else if(number%2==1)
{
number=3*(number)+1;
}
printf("%d\n",number);
}
printf("CHild process completed ....");
return 0;
}
 else if(pid>0)
{
printf("Waiting for child process to be completed\n");
wait(NULL);
printf("parent process is completed ....\n");
}
else
{
printf("Unable to create child .....");
}
return 0;
}
