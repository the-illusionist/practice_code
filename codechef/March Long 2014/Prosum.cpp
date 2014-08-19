#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       unsigned long long n,i,c=0,c2=0;
       cin>>n;
       unsigned long long a[n];
       unsigned long long num;
       for(i=0;i<n;i++)
       {
           cin>>a[i];
           if (a[i]==1 || a[i]==0)
           {
               c++;
           }
           if (a[i]==2)
           {
               c2++;
           }
       }
       if (c2>1)
       {num=(((n-c)*(n-c-1))/2)-((c2*(c2-1))/2);}
       else
        num=(((n-c)*(n-c-1))/2);
       cout<<num<<endl;
    }
}
