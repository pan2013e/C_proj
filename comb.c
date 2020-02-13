/*
* Combinataion
*/
#include <stdio.h>
#include <time.h>
#include <string.h>
// static int combine(int m, int n) {
//     n = m / n > 1 ? n : m - n;
//     int s = 1;
//     for (int j = 1; j <= n; ++j) {
//         int i = m - n + j;
//         int sMod = s % j;
//         s /= j; 
//         s *= i; 
//         if (sMod > 0) {
//              s += sMod * i / j;
//         }    
//     }    
// return s;
// }
char a[10000];
int flag[10000];

void times(char *a,int x){
    for(int i=0;flag[i];i++){
        a[i]*=x;
    }
    for(int i=0;flag[i];i++){
        while (a[i]>=10)
        {
            a[i+1]++;
            flag[i+1]=1;
            a[i]-=10;
        }
    }
}
void divide(char *a,int y){

}
void C(int n,int k){
    memset(a,0,sizeof(a));
    memset(flag,0,sizeof(flag));
    a[0]=1;
    flag[0]=1;
    for(int i=1;i<=k;i++){
        times(a,i);
    }
    printf("%s",a);

}
int main(){
    int n,k;
    // double start,finish;
    // start=clock();
    while (scanf("%d%d",&n,&k)!=EOF)
    {
        C(n,k);
    }
    // finish=clock();
    // printf("%.6f",(finish-start)/CLOCKS_PER_SEC);
    return 0;
}