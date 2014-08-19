#include <bits/stdc++.h>
using namespace std;

int main()
{   long long n,m,p,i,j,x;
    cin>>n>>m>>p;
    long long k[p],l[p],a[m];
    for(i=0;i<p;i++)
    {
        cin>>k[i]>>l[i];

    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
           a[j]= j+1;
        }
        for(x=0;x<p;x++)
        {
          if(k[x]==i+1)
          {
              a[l[x]-1]=a[l[x]-1]+1;
          }
        }
        long long val=0;
        int q=0;
        for(j=m-1;j>0;j--)
        {
          if(a[j-1]>a[j])
          {
              q=1;
              break;
          }
          else
          {
              val=val+(a[j]-a[j-1]);
          }
        }
        if(q==0)
        {
            cout<<val<<endl;

        }
        else
        {
            cout<<'-'<<'1'<<endl;
        }
    }
    return 0;
}
