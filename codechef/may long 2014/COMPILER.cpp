#include <bits/stdc++.h>
using namespace std;


int main()
{   int t;
    cin>>t;
    while(t--)
    {
    string s;
    cin>>s;
    unsigned long long i,len,a=0,b=0,z=0,x=0,y=0;
    len=s.length();
    for(i=0;i<len;i++)
    {
        if(s[i]=='<')
        {
            a++;
        }
        if(s[i]=='>')
        {
            b++;
        }
        if(b>a)
        {
            break;
        }
    }
    if(i==len)
    {   int q=0;
        if(a==b)
        {
         cout<<b+b<<endl;
        }
        else
        {
            while(q!=1)
        {   z=0;
            for(i=0;i<len;i++)
            {
                if (s[i]=='>')
                {
                    z=i;
                }
            }
            x=0;
            y=0;
            for(i=0;i<z+1;i++)
            {
                if (s[i]=='>')
                {
                    x++;
                }
                if (s[i]=='<')
                {
                    y++;
                }
            }
            if (x==y)
            {
                q=1;
            }
            else
            {
                s[z]=2;
            }
        }
         cout<<x+y<<endl;

        }
    }
    else
    {
       if(a==b-1)
        {
         cout<<b+b-2<<endl;
        }
        else
        {
            cout<<'0'<<endl;
        }
    }
    }
    return 0;
}
