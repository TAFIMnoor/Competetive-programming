#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,x;
    cin>>n;
    int a[n];
    for(i=x=0; i<n; i++)
    {
        cin>>a[i];
        if(a[i]%2==0)
            x++;
    }
    if(x!=n && x>0)
    {
        sort(a,a+n);
    }
    for(i=0; i<n; i++)
        cout<<a[i]<<" ";
    
    return 0;
}
