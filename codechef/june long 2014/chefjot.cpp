#include <bits/stdc++.h>
using namespace std;

int main()
{  unsigned long n,i,out=0,count=0;
   cin>>n;
   int a[n];
   for(i=0;i<n;i++)
   {
       cin>>a[i];
   }
   for(i=0;i<n;i++)
   {
      if(a[i]!=0)
      {
          count++;
      }
      if(a[i]==0 )
      {
          if(count>out)
          {
            out=count;
          }
          count=0;
      }
      if(a[i]!=0 && i==n-1 && count>out)
      {
          out=count;
      }
   }
   cout<<out<<endl;
    return 0;
}
