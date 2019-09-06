#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,x,y;
    string s;
    cin>>x>>s;
    for(i=x=y=0; i<s.length(); i++)
    {
        if(s[i]=='1')
            x++;
        else y++;
    }
    if(x!=y)
    {
        cout<<1<<endl;
        for(i=0; i<s.length(); i++)
            cout<<s[i]<<"";
    }
    else
    {
        cout<<2<<endl;
        for(i=x=y=0; i<s.length()/2; i++)
        {
            if(s[i]=='1')
                x++;
            else y++;
        }
        if(x!=y)
        {
              for(i=0; i<s.length()/2; i++)
              {
                   cout<<s[i]<<"";
               }
                    cout<<" ";
                for(i=i; i<s.length(); i++)
                {
                    cout<<s[i]<<"";
                 }
        }
        else
        {
             for(i=0; i<s.length()/2+1; i++)
             {
                   cout<<s[i]<<"";
             }
                   cout<<" ";
              for(i=i; i<s.length(); i++)
              {
                    cout<<s[i]<<"";
              }
        }
    }
    return 0;
}
