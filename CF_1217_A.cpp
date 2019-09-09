#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c,x,i;
        cin>> a>> b >>c;
        x = min(a,b);
        a = a-x;
        b = b-x;
        if(a+c<=b){
            cout<<0<<endl;
            continue;
        }
        if(a>b+c){
            cout<<c+1<<endl;
        }
        else cout<<(a+c-b+1)/2<<endl;
    }
    return 0;
}
