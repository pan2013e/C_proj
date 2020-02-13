//P1579
#include <iostream>
#include <cmath>
using namespace std;
int isPrime(int x){
    for(int i=2;i<sqrt(x)+1;i++){
        if(x%i==0) return 0;
    }
    return 1;
}
int main(){
    int n;
    cin>>n;
    if(isPrime(n-4)){
        cout<<2<<" "<<2<<" "<<n-4;
        return 0;
    }
    for(int i=3;i<n;i+=2){
        if(isPrime(i)){
            for(int j=3;j<n-i;j+=2){
                if(isPrime(j)&&isPrime(n-i-j)){
                    cout<<i<<" "<<j<<" "<<n-i-j;
                    return 0;
                }
            }
        }
    }
    return 0;
}

