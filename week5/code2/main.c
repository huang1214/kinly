#include "/home/rlk/Documents/test1/week5/code1/staticlib/lib.h"

int main(){
    int a[100];
    urand(a,100);
    printf("max:%d\n",max(a,100));
    printf("sum:%d\n",sum(a,100));
    return 0;
}
