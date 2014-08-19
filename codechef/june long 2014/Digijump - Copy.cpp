#include <bits/stdc++.h>
using namespace std;

int main()
{   long k,i,j,x,y,z,a,b,w;
    string str;
    cin>>str;
    k=str.length();
    long val[k];
    val[k-1]=0;
    int s[k];
    for(i=0;i<k;i++)
    {
        s[i]=str[i]-48;
    }
    z=1;y=1;
    for(i=k-2;i>=0;i--)
    {
       for(j=i+1;j<k;j++)
       {
           if(s[j]==s[i])
           {
               y=1+val[j];
           }
       }
       z=1+val[i+1];
        val[i]=min(y,z);
        y=k-i;
        z=k-i;
    }
    w=k+1;
for(i=1;i<k;i++)
    {
       for(j=i+1;j<k;j++)
       {
           if(s[j]==s[i])
           {
               w=1+val[j];
           }
       }
       x=1+val[i-1];
        val[i]=min(x,w);
        w=k-i;
    }
x=k+1;
for(i=k-2;i>=1;i--)
    {
       for(j=i+1;j<k;j++)
       {
           if(s[j]==s[i])
           {
               x=1+val[j];
           }
       }
       y=1+val[i-1];
       z=1+val[i+1];
        val[i]=min(x,min(y,z));
        x=k-i;
    }
   cout<<val[0]<<endl;
    return 0;
}
