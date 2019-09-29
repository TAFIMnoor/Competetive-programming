#include<bits/stdc++.h>
using namespace std;
int *counts=NULL,*coins=NULL;
int n,value,ways=0;
void print(int si,int t)
{
    if(si>=n)
    {
        ways++;
        for(int i=0; i<n; i++)
        {
            cout<<counts[i]<<" "<<coins[i]<<endl;
        }
    }
    else if(si==n-1)
    {
        if(t%coins[si]==0)
        {
            counts[si]=t/coins[si];
            print(si+1,0);
        }
    }
    else
    {
        for(int i=0; i<=t/coins[si]; i++)
        {
            counts[si]=i;
            print(si+1,t-coins[si]*i);
        }
    }
}
int main()
{
    cin>>n;
    coins = new int[n];
    counts = new int[n];
    for(int i=0; i<n; i++)
        cin>>coins[i];

    cin>>value;
    print(0,value);
    cout<<"ways :"<<ways<<"";

}
