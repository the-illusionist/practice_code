#include <bits/stdc++.h>
using namespace std;

int main()
{   long k,i,j,x,y,z,a,b;
    string str;
    cin>>str;
    k=str.length();
    long val[k];
    val[k-1]=0;
    val[k-2]=1;
    int s[k];
    for(i=0;i<k;i++)
    {
        s[i]=str[i]-48;
    }
    x=2;y=2;z=2;
    for(i=k-3;i>=0;i--)
    {
       for(j=i+1;j<k;j++)
       {
           if(s[j]==s[i])
           {
               x=1+val[j];
           }
           if(s[j]==s[i-1])
           {
               y=2+val[j];
           }
           if(s[j]==s[i+1] && j!=i+1)
           {
               z=2+val[j];
           }
       }
       a=min(x,1+val[i+1]);
        val[i]=min(x,min(y,a));
        x=k-i;
        y=k-i;
        z=k-i;

    }
    cout<<val[0]<<endl;
    return 0;
}
