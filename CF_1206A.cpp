#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,i;
    cin>>n;
    int a[n];
    for(i=0; i<n; i++){
        cin>>a[i];
    }
    sort(a,a+n);
 
    cin>>m;
    int b[m];
    for(i=0; i<m; i++){
        cin>>b[i];
    }
    sort(b,b+m);
 
    cout<<a[n-1]<<" "<<b[m-1]<<endl;
    return 0;
}
