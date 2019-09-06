#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,i,x;
    cin>>n;
    long long int a[n];
    for(i=0; i<n; i++){
        cin>>a[i];
    }
    sort(a,a+n);
    for(i=x=0; i<n; i++){
            x+=a[i];
    }
    if(x%2==0 && (x-a[n-1]>=a[n-1]))
    {
        cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;
    return 0;
}
