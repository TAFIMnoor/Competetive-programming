#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,t,i,x,k;
    cin>>t;
    while(t--)
    {
        cin>>n;
        long long int a[n];
        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        x=a[0]*a[n-1];
        vector<long long int> v;
        for(i=2; i<=sqrt(x); i++)
        {
            if(x%i==0)
            {
                v.push_back(i);
                if(i!=x/i)
                {
                    v.push_back(x/i);
                }
            }
        }
        sort(v.begin(), v.end());
        for(i=0,k=1; i<n; i++)
        {
            if(v[i]!=a[i]){
                k=0; break;
            }
        }
        if(k!=0)
            cout<<x<<endl;
        else cout<<-1<<endl;
    }
    return 0;
}
