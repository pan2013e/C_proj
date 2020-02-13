#include <stdio.h>

int main(){
    int in;
    char a[10];
    char s[10]={0};
    while(1){
        gets(a);
        if(a[0]=='#') break;
        char *p=&a[0];
        while(*p++!='\0'){
            if(*p>='A'&& *p<='Z'){
                num=num*26+*p-'A'+1;
            }
            if(*p>='0'&&*p<='9'){
                
            }
        }
    }
    return 0;
}