#include <stdio.h>

int main(){
   char s[2][3]={"ab", "cd"}, *p=(char *)s;
   printf("%c",*++p+2);
    return 0;
}