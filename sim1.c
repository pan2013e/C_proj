#include <stdio.h>

int main(){
    int year,month,days=0;
    scanf("%d%d",&year,&month);
    int isR=0;
    if((year%400==0)||(year%4==0&&year%100!=0))
        isR=1;
    switch (month){
        case 1: days=31;break;
        case 2: days=29;break;
        case 3: days=31;break;
        case 4: days=30;break;
        case 5: days=31;break;
        case 6: days=30;break;
        case 7: days=31;break;
        case 8: days=31;break;
        case 9: days=30;break;
        case 10: days=31;break;
        case 11: days=30;break;
        case 12: days=31;break;
    }
    if((!isR) && month==2) days--;
    printf("year = %d month = %d days=%d",year,month,days);
    return 0;
}