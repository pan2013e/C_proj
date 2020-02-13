#include <stdio.h>
void swap(int* a, int* b){
    int t;
    t=*a;*a=*b;*b=t;
}
int main(){
    int n;
    scanf("%d",&n);
    int a[10];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    int min=a[0];
    int minpos=0;
    for (int i = 1; i < n; i++)
    {
        if(a[i]<min){
            min=a[i];
            minpos=i;
        }
    }
    swap(&a[0],&a[minpos]);
    int max=a[0];
    int maxpos=0;
    for (int i = 1; i < n; i++)
    {
        if(a[i]>max){
            max=a[i];
            maxpos=i;
        }
    }
    swap(&a[n-1],&a[maxpos]);
    for (int i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
    }
    
    
    return 0;
}