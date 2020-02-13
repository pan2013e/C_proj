#include <stdio.h>

int Search(int * a,int X,int n);

int main(){
    int N,X;
    scanf("%d%d",&N,&X);
    int a[20];
    for (int i = 0; i < N; i++)
    {
        scanf("%d",&a[i]);
    }
    if(Search(a,X,N)==-1){
        printf("Not Found");
    }else{
        printf("%d",Search(a,X,N));
    }

    return 0;
}
int Search(int * a,int X,int n){
    for (int i = 0; i < n; i++)
    {
        if(a[i]==X) return i;
    }
    return -1;
}