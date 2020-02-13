#include <stdio.h>

int main(){
    int n;
    int a[10];
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    int max=a[0];
    int pos=0;
    for (int i = 1; i < n; i++)
    {
        if(a[i]>max){
            max=a[i];
            pos=i;
        }
    }
    printf("%d %d",max,pos);
    
    return 0;
}