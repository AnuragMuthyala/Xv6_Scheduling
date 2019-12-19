//#include"defs.h"
#include"fs.h"
#include"fcntl.h"
#include"syscall.h"
#include"traps.h"
#include"memlayout.h"
#include"user.h"

int main(int argc,char *argv[]){

int a,b;
int status;
float c;
int pid;
struct proc_stat st;
for(int i = 0;i < 10;i++){

pid = fork();

if(pid == 0){
setpriority(getpid(),15 - getpid());
for(float j = 0;j < 100000.0;j = j + 0.01)c = c * 3.01 * 5.25;
getpinfo(getpid(),&st);
printf(1,"Pid: %d\n",st.pid);
printf(1,"Tick 0: %d\n",st.ticks[0]);
printf(1,"Tick 1:%d\n",st.ticks[1]);
printf(1,"Tick 2:%d\n",st.ticks[2]);
printf(1,"Tick 3:%d\n",st.ticks[3]);
printf(1,"Tick 4:%d\n",st.ticks[4]);
ps(); 

exit();
}

else continue;
}

for(int i = 0;i < 10;i++){
status = waitx(&a,&b);
printf(1,"Pid: %d\n",status);
printf(1,"Waiting time: %d\n",a);
printf(1,"Running time: %d\n",b);
}

exit();
return 0;
}

