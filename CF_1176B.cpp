#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i,j,x,k,l,y;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n];
        for(i=0; i<n; i++){
            cin>>a[i];
            a[i]=a[i]%3;
        }
        for(i=j=x=y=k=0; i<n; i++)
        {
            if(a[i]==0){
                j++;
            }
            else if(a[i]==1)
            {
                y++;
            }
            else if(a[i]==2)
            {
                k++;
            }
        }
        l=min(y,k);
        y=(y-l)/3;
        k=(k-l)/3;
        cout<<j+y+k+l<<endl;
    }
    return 0;
}
