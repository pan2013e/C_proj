//P1478
#pragma GCC optimize(2)
#include <iostream>
using namespace std;

int main(){
    int n,s,a,b,cnt=0;
    int x[100000],y[100000];
    bool flag[100000];
    cin>>n>>s;
    cin>>a>>b;
    for (int i = 0; i < n; i++)
    {
        cin>>x[i]>>y[i];
        if(x[i]<=a+b){
            flag[i]=true;
        }else{
            flag[i]=false;
        }
    }
    for(int j=0;j<n;j++){
        int k=j;
        for(int m=j+1;m<n;m++){
            if(y[m]<y[k]) k=m;
        }
        if(k!=j) {
            swap(x[k],x[j]);
            swap(y[k],y[j]);
            swap(flag[k],flag[j]);
        }
    }
    int sum=0;
    for (int j = 0; j < n && sum < s; j++)
    {
        if(flag[j]){
            sum+=y[j];
            cnt++;
        }
    }
    if(sum>s) cnt--;
    cout<<cnt;
    return 0;
}

