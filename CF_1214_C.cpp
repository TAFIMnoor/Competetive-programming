#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum,i;
    cin>>n;
    string s;
    cin>>s;
    for(i=sum=0; i<n; i++)
    {
        if(s[i]=='(')
            sum++;
        else
        {
            sum--;
            if(sum<-1)
            {
                cout<<"NO"<<endl;
                return 0;
            }
        }
    }
    if(sum==0)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
