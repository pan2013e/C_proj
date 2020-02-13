#include <stdio.h>
#include <stdlib.h>

int main(){
    int a[2][3]={1,2,3,4,5,6};
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if(a[-1][3]==a[i][j]){
                printf("a[%d][%d]=a[-1][3]=%d",i,j,a[-1][3]);
            }
        }
        
    }
    
}
