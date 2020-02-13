#include <stdio.h>

int main(){
    int a[100];
    int n;
    scanf("%d",&n);
    int sum=0;
    for(int i=0;i<n;i++){
        for (int j = 0; j < n; j++)
        {
            scanf("%d",&a[i*n+j]);
            if(i+j!=n-1 && i!=n-1 && j!=n-1){
                sum+=a[i*n+j];
            }
        }
        
        
        
    }
    printf("%d",sum);

    return 0;
}