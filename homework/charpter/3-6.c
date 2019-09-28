#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>

int main(int argc,char *argv[]){
    int fd;
    char buf1[20];
    char buf2[6] = "nihao";
    
    if((fd=open("3-6", O_RDWR | O_APPEND))<0){
        printf("open error\n");
        return -1;
    }
    if (lseek(fd,5,SEEK_SET) < 0) /*将文件的偏移量设置为5*/
                printf("lseek error! \n");
        if (read(fd,buf1,5) < 0)     /*从偏移量为5处读出五个字符*/
                printf("read error! \n");
        else
                printf("read:%s \n",buf1);/*将读出的字读输出*/
        if (write(fd,buf2,6) < 0)    /*将字符串buf2写入文件*/
                printf("write error! \n");
    return 0;
}