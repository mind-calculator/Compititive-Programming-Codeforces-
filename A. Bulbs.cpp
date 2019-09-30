#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n,m,k,count=0,x;
    vector<int> vec;
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        cin>>k;
        for(int j=1;j<=k;j++){
            cin>>x;
            vec.push_back(x);
        }
    }
    for(int i=0;i<vec.size();i++){
        if(vec[i]!=0)
            count++;
        for(int j=i+1;j<=vec.size();j++){
            if(vec[i]==vec[j])
                vec[j]=0;
        }
    }
    if(count==m)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
