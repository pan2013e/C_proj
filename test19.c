#include <stdio.h>
typedef int ElementType;
int main(){
    ElementType x[5]={2,4,6,8,10},*p1=&x[1],*p2=&x[4];
    printf("%d\n",p2-p1);
    printf("%p %p %p",p2,p1,p2-p1);
}