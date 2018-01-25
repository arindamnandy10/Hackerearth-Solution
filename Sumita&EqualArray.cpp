#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    long long t,n,x1,x,y,z,p;
    cin>>t;
    while(t--)
    {
        cin>>n>>x>>y>>z;
        long long arr[100005];
        for(int i=0;i<n;++i)
        {
            cin>>arr[i];
        }
        int done=0;
        for(int i=0;i<n;++i)
        {
            while(arr[i]%x==0) arr[i]/=x;
            while(arr[i]%y==0) arr[i]/=y;
            while(arr[i]%z==0) arr[i]/=z;
        }
        for(int i=1;i<n;++i) if(arr[i]!=arr[i-1])
        {
            done=1;
            break;
        }
        if(!done) cout<<"She can"<<endl;
        else cout<<"She can't"<<endl;
    }
    return 0;
}
