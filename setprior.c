#include"fs.h"
#include"fcntl.h"
#include"syscall.h"
#include"traps.h"
#include"memlayout.h"
#include"user.h"

int main(int argc,char *argv[]){

int pid = fork();

if(pid == 0){
printf(1,"Old priority is %d\n",setpriority(getpid(),100));
}

else{
wait();
}
exit();
return 0;
}
