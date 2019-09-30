#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    long long k,p;
    cin>>n>>k;
    for(long long i=1;i<=n;i++){
        long long x=pow(2,i);
        long long y=pow(2,i-1);
        if(k%x==y){
            p=i;
            break;
        }
    }
    cout<<p<<endl;
    return 0;
}
