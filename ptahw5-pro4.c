#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int a[10];
    int cnt=0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    for (int i = 0; i < n-1; i++)
    {
        printf("%d",a[i+1]-a[i]);
        cnt++;
        if(cnt%3 && i!=n-2){
            printf(" ");
        }else
        {
            printf("\n");
        }
        
    }
    return 0;
}