#include <stdio.h>
#include <string.h>
typedef char ElementType;

static void swap(char *a,char *b){
    char t;
    t=*a;*a=*b;*b=t;
}

static void reverse(ElementType *s,int len){
    for(int i=0;i<len/2;i++){
        swap(&s[i],&s[len-i-1]);
    }
}
int main(){
    ElementType s[80];
    scanf("%[^\n]",s);
    reverse(s,strlen(s));
    printf("%s",s);
    return 0;
}