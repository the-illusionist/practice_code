#include <bits/stdc++.h>
using namespace std;

int main()
{   string s;
    cin>>s;
    int i, cn=0,ci=0, ce=0,ct=0,num;
    for(i=0;i<s.length();i++)
    {
        if(s[i]=='n')
        {
            cn++;
        }
        if(s[i]=='i')
        {
            ci++;
        }
        if(s[i]=='t')
        {
            ct++;
        }
        if(s[i]=='e')
        {
            ce++;
        }
    }

    num=min(min(ci,(cn-1)/2),min(ce/3,ct));
    cout<<num<<endl;
}
