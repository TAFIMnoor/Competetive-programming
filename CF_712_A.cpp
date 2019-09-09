#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,x,p;
    cin>>n;
    int a[n],b[n];
    for(i=0; i<n; i++)
    {
        cin>>b[i];
    }
    a[n-1]=b[n-1];
    for(i=n-2; i>=0; i--)
    {
      a[i]=b[i]+b[i+1];
    }
    for(i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
