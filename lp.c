2) diaplay lines between lines
echo Enter File Name:
read f
echo Enter Starting Line Number:
read st
echo Enter Ending Line Number:
read end
echo The lines between $st and $end from $f are:
if [ $st -lt $end ]
then
sed -n "$st,$end p" $f
elif [ $st -gt $end ]
then
sed -n "$end,$st p" $f
fi
8a] awk count noof lines
count=0
awk '$0!~/[aeiou]/{ count++ }
END{print "The number of lines that do not contain vowels are: ",count}' $1




8b] no of lines words and char
awk '{w+=NF
      c+=length($0)}
END{print("Lines,Words,Characters:",NR,w,c)}' $1
                                            

10] c to emulate ls -l command
#include<stdio.h>
#include<stdlib.h>
#include<dirent.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<pwd.h>
#include<grp.h>
#include<time.h>
int main(int argc, char *argv[]){
struct dirent *dir;
struct stat fs;
struct passwd *pw;
struct group *gp;
stat(argv[1],&fs);
DIR *d = opendir(argv[1]);
if (d) {
while ((dir = readdir(d)) != NULL){
printf("%ld ",dir->d_ino);
stat(dir->d_name,&fs);
printf( (S_ISDIR(fs.st_mode)) ? "d" : "-");
printf( (fs.st_mode & S_IRUSR) ? "r" : "-");
printf( (fs.st_mode & S_IWUSR) ? "w" : "-");
printf( (fs.st_mode & S_IXUSR) ? "x" : "-");
printf( (fs.st_mode & S_IRGRP) ? "r" : "-");
printf( (fs.st_mode & S_IWGRP) ? "w" : "-");
printf( (fs.st_mode & S_IXGRP) ? "x" : "-");
printf( (fs.st_mode & S_IROTH) ? "r" : "-");
printf( (fs.st_mode & S_IWOTH) ? "w" : "-");
printf( (fs.st_mode & S_IXOTH) ? "x" : "-");
printf(" ");
pw=getpwuid(fs.st_uid);
printf("%s ",pw->pw_name);
gp=getgrgid(fs.st_gid);
printf("%s ",gp->gr_name);
printf("%ld ",fs.st_size);
char *c=ctime(&fs.st_mtime);
for(int i =5; i<17; i++) {printf("%c",c[i-1]);}
printf(" ");
printf("%s ",dir->d_name);
printf("\n");
}
closedir(d);
}
return(0);
}

yy











11]zombi process
#include<stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

int main(){

    int pid = fork();
    if (pid ==  0){
        printf("child process %d\n",getpid());
	exit(0);
     }
    else {
        wait(0);
	sleep(10);
    	printf("Parent process\n");
       }
    return 0;
}



12ab] writing from message queue

#include <stdio.h>
#include <sys/ipc.h>
#include <sys/msg.h>
#define MAX 100

struct mesg_buffer {
	long mesg_type;
	char mesg_text[100];
} message;

int main(){
	key_t key;
	int msgid;
	key = ftok("progfile", 65);
	msgid = msgget(key, 0666 | IPC_CREAT);
	message.mesg_type = 1;
	printf("Write Data : ");
	fgets(message.mesg_text,MAX,stdin);
	msgsnd(msgid, &message, sizeof(message), 0);
	printf("Data send is : %s \n", message.mesg_text);
	return 0;
}
                                                                  




12c] reading from messge queue
#include <stdio.h>
#include <sys/ipc.h>
#include <sys/msg.h>
struct mesg_buffer {
	long mesg_type;
	char mesg_text[100];
} message;

int main(){
	key_t key;
	int msgid;
	key = ftok("progfile", 65);
	msgid = msgget(key, 0666 | IPC_CREAT);
	msgrcv(msgid, &message, sizeof(message), 1, 0);
	printf("Data Received is : %s \n",message.mesg_text);
	msgctl(msgid, IPC_RMID, NULL);
	return 0;
}

s


15] data comm between e process
#include<stdio.h>
#include<stdlib.h>
#include<errno.h>
#include<unistd.h>
int main(){
	int pfds[2];
	char buf[30];
	if(pipe(pfds)==-1){
		perror("pipe");
		exit(1);
	}
	printf("\nwriting to file descriptor #%d\n", pfds[1]);
	write(pfds[1],"test is for testing pipe communication",38);
	printf("reading from file descriptor #%d\n ", pfds[0]);
	read(pfds[0],buf,38);
	printf("read %s\n" ,buf);
}
