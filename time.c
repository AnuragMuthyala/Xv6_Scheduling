//#include"defs.h"
#include"fs.h"
#include"fcntl.h"
#include"syscall.h"
#include"traps.h"
#include"memlayout.h"
#include"user.h"

int main(int argc,char *argv[]){

int a,b;
int pid;
for(int i = 0;i < 10;i++){

pid = fork();

if(pid == 0){
sleep(2);
exec(argv[1],argv + 1);

exit();
}

else continue;
}

for(int i = 0;i < 10;i++){
waitx(&a,&b);
printf(1,"Waiting time: %d\n",a);
printf(1,"Running time: %d\n",b);
}

exit();
return 0;
}

