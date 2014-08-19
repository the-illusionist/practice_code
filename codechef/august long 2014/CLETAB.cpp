#include<bits/stdc++.h>
using namespace std;

int main()
{
long t,n,m,i,j;
cin>>t;
while(t--)
{
cin>>n>>m;
long order[m+1],next[401],clean=1,cust[n+1];
for(i=1;i<=m;i++)
{
cin>>order[i];
next[order[i]]=500;
}
if(m<=n)
{
    for(i=2;i<=m;i++)
    {
        int flag=0;
        for(j=1;j<i;j++)
        {
            if(order[j]==order[i])
            {
              flag=1;
              break;
            }
        }
        if(flag==0)
        {
            clean++;
        }
    }
    cout<<clean<<endl;
}
else
{
int k,flag;
    for(i=2;i<=m;i++)
    {
        if(order[i]==order[1])
        {
            next[order[1]]=i;
            break;
        }
    }
    cust[1]=order[1];
    for(i=2;i<=m;i++)
    {
        flag=0;
        for(j=1;j<i;j++)
        {
            if(order[j]==order[i])
            {
              flag=1;
              break;
            }
        }
        if(flag==0)
        {
            clean++;
            cust[clean]=order[i];
        }
      for(k=i+1;k<=m;k++)
      {
          if(order[k]==order[i])
          {
              next[order[i]]=k;
              break;
          }
      }
        if(clean==n)
        {
            break;
        }
    }

    for(k=i+1;k<=m;k++)
    {
        flag=0;
        for(j=1;j<=n;j++)
        {
            if(cust[j]==order[k])
            {
              flag=1;
              break;
            }
        }
        if(flag==1)
        {
            for(j=k+1;j<=m;j++)
        {
            if(order[k]==order[j])
          {
              next[order[k]]=j;
              break;
          }
        }
        }
        else if(flag==0)
        {
            clean++;
            int maxi=next[cust[1]],posi=1;
            for(j=1;j<=n;j++)
        {
            if(next[cust[j]]>maxi)
            {
                maxi=next[cust[j]];
                posi=j;
            }
        }
        cust[posi]=order[k];
        for(j=k+1;j<=m;j++)
        {
            if(order[k]==order[j])
          {
              next[order[k]]=j;
              break;
          }
        }
        }
    }
  cout<<clean<<endl;
}


}
return 0;
}
