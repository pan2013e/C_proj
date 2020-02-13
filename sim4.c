#include <stdio.h>
#include <stdlib.h>

int main(){
    int cnt=0,num;
    int dig=0;
    scanf("%d",&num);
    char a[1000]={0};
    char b[1000]={0};
    char temp,t2;
    int i=0;
    int bool[26]={0};
    getchar();
    while((temp=getchar())!='\n'){
        a[i++]=temp;
        bool[temp-'A']=1;
    }
    fflush(stdin);
    i=0;
    while ((t2=getchar())!='\n')
    {
        b[i++]=t2;
        dig++;
    }
    int m=0;
    while(b[m]!=0){
        if((m+1)!=num && bool[b[m]-'A']){
            printf("%d ",m+1);
            cnt++;
        }
        m++;
    }
    if(!cnt) printf("Lonely Xiao Ming");
    return 0;
}