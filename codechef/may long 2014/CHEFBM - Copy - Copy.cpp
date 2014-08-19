#include <bits/stdc++.h>
using namespace std;

int main()
{   long long n,m,p,i,j,l,x,y,val,h,a,b;
    cin>>n>>m>>p;
    pair<long long, long long> k[p];
    for(i=0;i<p;i++)
    {
        cin>>x>>y;
        k[i]=make_pair(x, y);
    }
    sort (k, k+p);
    j=0;
    for(i=0;i<n;i++)
    { val=m-1;
      x=j;
      for(j=x;j<p;j++)
      {
          if(k[j].first<=i+1)
          {
             if(k[j].second==m)
             {
                 val++;
             }
          }
          else
          {

              break;
          }
      }
if(k[x].first==i+1)
      {h=k[x].second;
      a=0;b=0;
      for(l=x;l<j;l++)
      {
        if(k[l].second==h)
        {
            a++;
        }
          if(k[l].second==h+1)
        {
            b++;
        }
        if(k[l].second>h+1)
        {
            if(a-b>1)
            {
                val=-1;
                break;
            }
            else
            {  if(k[l].second<=m-1)
               {
                   h=k[l].second;
                   a=0;b=0;
               }
               if(k[l].second>m-1)
               {
                   break;
               }
            }
        }

      }}
      if(a-b>1)
            {
                val=-1;
            }
      cout<<val<<endl;
    }
    return 0;
}
