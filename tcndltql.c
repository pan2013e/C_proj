#include <stdio.h>
#include <math.h>

double funcos( double e, double x );

int main()
{    
    double e, x;

    scanf("%lf %lf", &e, &x);
    printf("cos(%.2f) = %.6f\n", x, funcos(e, x));

    return 0;
}
double funcos( double e, double x ){
	int flag=-1;
	double item=1,m=2,sum=1;
	double fenmu=1, fenzi;
	
	while(item>e){
		for(int i=1;i<=m;i++){
			fenmu=fenmu*i;
		}	 
		fenzi=pow(x,m);
		item=fenzi/fenmu;
		sum=sum+flag*item;
		m=m+2;
		fenmu=1;
		flag=-flag;
	}	
	return sum;	
}