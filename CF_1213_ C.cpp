#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n,m,i,x,sum;
        vector<int>v;
        cin>>n>>m;
        n=n/m;
        for(i=1,sum=0; i<=n; i++)
        {
            x=m*i;
            if(x<10)
            {
                sum+=x;
                v.push_back(x);
            }
            else if(x>=10)
                {
                    if(i!=1 && x%10==v[0]){
                        break;}
                    sum+=(x%10);
                    v.push_back(x%10);
                }
        }
        if(i!=1)
        {
        i=i-1;
        x=n/i;
        sum*=x;
        for(x=0; x<n%i; x++)
        {
            sum+=v[x];
        }
        }
        cout<<sum<<endl;
    }
    return 0;
}
