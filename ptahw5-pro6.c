#include <stdio.h>

int main(){
    int N;
    scanf("%d",&N);
    int a[1000]={0};
    
    for (int i = 0; i < N; i++)
    {
        scanf("%d",&a[i]);
    }
    int max=1;
    int maxnum=a[0];
    for (int i = 0; i < N; i++)
    {
        int temp=0;
        for(int j=0; j < N; j++){
            if(a[j]==a[i]){
                temp++;
            }
        }
        if(temp>max){
            max=temp;
            maxnum=a[i];
        }
    }
    printf("%d %d",maxnum,max);
    return 0;
}