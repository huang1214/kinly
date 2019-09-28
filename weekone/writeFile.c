#include <unistd.h>
#include "uhead.h"
#define BUFFERSIZE 8192

int main(void){
    int n;
    char buf[BUFFERSIZE];
    while ((n = read(STDIN_FILENO,buf,BUFFERSIZE))>0)
    {
        if (write(STDOUT_FILENO,buf,n) != n)
        {
            perror("write error");
        }        
    }
    if (n < 0)
    {
        perror("read error");
    }
    
    return 0;
}