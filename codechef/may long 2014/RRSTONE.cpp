#include <bits/stdc++.h>
using namespace std;

int main()
{   unsigned long long n,k,j,l,i;
    cin>>n;
    cin>>k;
    long long a[n],b[n],c[n],maxi,mini;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    maxi=a[0];
    mini=a[0];
   for(i=0;i<n;i++)
   {
      if(a[i]>=maxi)
      {
          maxi=a[i];
          j=i;
      }
      if(a[i]<=mini)
      {
          mini=a[i];
          l=i;
      }
   }
   for(i=0;i<n;i++)
    {
        b[i]=a[j]-a[i];
    }
    for(i=0;i<n;i++)
    {
        c[i]=b[l]-b[i];
    }
    if(k==0)
    {
      for(i=0;i<n;i++)
    {
        cout<<a[i]<<' ';
    }
    }
    if (k%2==1)
     {
        for(i=0;i<n;i++)
    {
        cout<<b[i]<<' ';
    }
     }
     if (k%2==0 && k>1)
     {
        for(i=0;i<n;i++)
    {
        cout<<c[i]<<' ';
    }
     }
    return 0;
}
