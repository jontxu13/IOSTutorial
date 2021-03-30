#include<stdio.h>
#include<unistd.h>
int main(int argc, char **argv)
{
    if(argc<2){
        printf("Need more parameter, Ex: 'cd root'\n");
    }else{
        if (chdir(argv[1])==-1){
            return -1;
        }else{
            chdir(argv[1]);
        }
    }
    return 0;
}