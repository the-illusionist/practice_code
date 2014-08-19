#include <bits/stdc++.h>
using namespace std;

int main()
{   long long n,m,p,i,j,k,l;
    cin>>n>>m>>p;
    long long arr[n][m];
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            arr[i][j]=j+1;
        }
    }
    for(i=0;i<p;i++)
    {
        cin>>k>>l;
        arr[k-1][l-1]=arr[k-1][l-1]+1;
    }
    for(i=0;i<n;i++)
    {   long long val=0;
        int q=0;
        for(j=m-1;j>0;j--)
        {
          if(arr[i][j-1]>arr[i][j])
          {
              q=1;
              break;
          }
          else
          {
              val=val+(arr[i][j]-arr[i][j-1]);
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
