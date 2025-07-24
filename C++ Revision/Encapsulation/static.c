#include<stdio.h>
void f1();
int main(){
    f1();
    f1();
    f1();
    return 0;
}
void f1()
{
    int x=5;
    static int y;
    x++;
    y++;
    printf("x=%d y=%d\n",x,y);
}