#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       long n,i,max;
       cin>>n;
       long a[n];
       for(i=0;i<n;i++)
       {
           cin>>a[i];
       }
       max=a[0];
       for(i=0;i<n;i++)
       {
          if(a[i]+i>max)
          {
              max=a[i]+i;
          }
       }
       cout<<max<<endl;
    }
}
