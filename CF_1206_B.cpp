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
        if(a[i]<0)
            x++;
    }
    long long int y;
    for(i=y=0; i<n; i++)
    {
        if(a[i]>1){
            y+=(a[i]-1);}
        else if(a[i]<-1){
            y+=(abs(a[i])-1);}
        else if(a[i]==0){
            y++;}
 
        a[i]=abs(a[i]);
    }
    if(x%2!=0)
    {
        sort(a,a+n);
        if(a[0]!=0)
            y+=2;
    }
    cout<<y<<"";
    return 0;
}
