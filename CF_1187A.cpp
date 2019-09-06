#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,n,s,e,x;
    cin>>t;
    while(t--)
    {
        cin>>n>>s>>e;
        if(n==s && n==e)
            cout<<1<<endl;
        else
        {
            x = (s+e)-n;
            s = s-x;
            e = e-x;
            cout<<max(++s,++e)<<endl;
        }
    }
    return 0;
}
