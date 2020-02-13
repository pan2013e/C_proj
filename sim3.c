#include <stdio.h>

int fun(int m){
    int cnt=0;
    for(int j=0;j<=m;j++){
        int dig=0;
        int t=j;
        do{
            t/=10;
            dig++;
        }while(t);
        int div=1;
        for(int i=0;i<dig;i++){
            div*=10;
        }
        if(j*j%div==j) cnt++;
    }
    return cnt;
}
int main(){
    int n,m;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&m);
        printf("%d",fun(m));
        if(i!=n-1) printf(" ");
    }
    return 0;
}