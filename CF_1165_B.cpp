#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,x,k=1;
    cin>>n;
    int a[n];
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    for(i=x=0; i<n; i++)
    {
        if(a[i]>=k){
            x++;
            k++;
        }
    }
    cout<<x<<endl;
    return 0;
}
