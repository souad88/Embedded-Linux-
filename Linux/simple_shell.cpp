#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#define MAX_INPUT_LENGTH 100
int main()
{
    char input[MAX_INPUT_LENGTH];
    while(1)
    {
            printf("SimpleShell$ ");
            //fgets : Read a line from A specified stream
            fgets(input,MAX_INPUT_LENGTH,stdin);
            if(input[0]=='\n')
            {
                continue;
            }
            //strcspn(const char*str1,const char*str2)
            //strcspn :calculate intial chars before 1st matching chars
            //ex: strcspn("hell","ell")->returns 1
            
            input[strcspn(input,"\n")]='\0'; //input=nothing after newline
            if(strcmp(input,"exit")==0||strcmp(input,"quit")==0)
            {
                printf("exit \n");
                break;
            }
            //fork a child process
            pid_t child_pid=fork();
            if(child_pid==-1)
            {
                    perror("faild");
                    exit(EXIT_FAILURE);
            }
            else if(child_pid==0)
            {
                char *argv[]={NULL};
                execvp(input,argv); //excute input entered in the system
                perror("Execution failed");
                exit(EXIT_FAILURE);
            }
            else
            {
                int status;
                waitpid(child_pid,&status,0);
            }
    }
    return 0;
}
